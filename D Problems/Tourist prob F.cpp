/**
 *    author:  tourist
 *    created: 30.08.2024 09:04:14
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

template <typename T>
T inverse(T a, T m) {
  T u = 0, v = 1;
  while (a != 0) {
    T t = m / a;
    m -= t * a; swap(a, m);
    u -= t * v; swap(u, v);
  }
  assert(m == 1);
  return u;
}

template <typename T>
class Modular {
 public:
  using Type = typename decay<decltype(T::value)>::type;

  constexpr Modular() : value() {}
  template <typename U>
  Modular(const U& x) {
    value = normalize(x);
  }

  template <typename U>
  static Type normalize(const U& x) {
    Type v;
    if (-mod() <= x && x < mod()) v = static_cast<Type>(x);
    else v = static_cast<Type>(x % mod());
    if (v < 0) v += mod();
    return v;
  }

  const Type& operator()() const { return value; }
  template <typename U>
  explicit operator U() const { return static_cast<U>(value); }
  constexpr static Type mod() { return T::value; }

  Modular& operator+=(const Modular& other) { if ((value += other.value) >= mod()) value -= mod(); return *this; }
  Modular& operator-=(const Modular& other) { if ((value -= other.value) < 0) value += mod(); return *this; }
  template <typename U> Modular& operator+=(const U& other) { return *this += Modular(other); }
  template <typename U> Modular& operator-=(const U& other) { return *this -= Modular(other); }
  Modular& operator++() { return *this += 1; }
  Modular& operator--() { return *this -= 1; }
  Modular operator++(int) { Modular result(*this); *this += 1; return result; }
  Modular operator--(int) { Modular result(*this); *this -= 1; return result; }
  Modular operator-() const { return Modular(-value); }

  template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, int>::value, Modular>::type& operator*=(const Modular& rhs) {
    value = normalize(static_cast<int64_t>(value) * static_cast<int64_t>(rhs.value));
    return *this;
  }
  template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, int64_t>::value, Modular>::type& operator*=(const Modular& rhs) {
    int64_t q = int64_t(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  }
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) {
    value = normalize(value * rhs.value);
    return *this;
  }

  Modular& operator/=(const Modular& other) { return *this *= Modular(inverse(other.value, mod())); }

  friend const Type& abs(const Modular& x) { return x.value; }

  template <typename U>
  friend bool operator==(const Modular<U>& lhs, const Modular<U>& rhs);

  template <typename U>
  friend bool operator<(const Modular<U>& lhs, const Modular<U>& rhs);

  template <typename V, typename U>
  friend V& operator>>(V& stream, Modular<U>& number);

 private:
  Type value;
};

template <typename T> bool operator==(const Modular<T>& lhs, const Modular<T>& rhs) { return lhs.value == rhs.value; }
template <typename T, typename U> bool operator==(const Modular<T>& lhs, U rhs) { return lhs == Modular<T>(rhs); }
template <typename T, typename U> bool operator==(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) == rhs; }

template <typename T> bool operator!=(const Modular<T>& lhs, const Modular<T>& rhs) { return !(lhs == rhs); }
template <typename T, typename U> bool operator!=(const Modular<T>& lhs, U rhs) { return !(lhs == rhs); }
template <typename T, typename U> bool operator!=(U lhs, const Modular<T>& rhs) { return !(lhs == rhs); }

template <typename T> bool operator<(const Modular<T>& lhs, const Modular<T>& rhs) { return lhs.value < rhs.value; }

template <typename T> Modular<T> operator+(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) += rhs; }
template <typename T, typename U> Modular<T> operator+(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) += rhs; }
template <typename T, typename U> Modular<T> operator+(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) += rhs; }

template <typename T> Modular<T> operator-(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) -= rhs; }
template <typename T, typename U> Modular<T> operator-(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) -= rhs; }
template <typename T, typename U> Modular<T> operator-(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) -= rhs; }

template <typename T> Modular<T> operator*(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) *= rhs; }
template <typename T, typename U> Modular<T> operator*(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) *= rhs; }
template <typename T, typename U> Modular<T> operator*(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) *= rhs; }

template <typename T> Modular<T> operator/(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) /= rhs; }
template <typename T, typename U> Modular<T> operator/(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) /= rhs; }
template <typename T, typename U> Modular<T> operator/(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) /= rhs; }

template<typename T, typename U>
Modular<T> power(const Modular<T>& a, const U& b) {
  assert(b >= 0);
  Modular<T> x = a, res = 1;
  U p = b;
  while (p > 0) {
    if (p & 1) res *= x;
    x *= x;
    p >>= 1;
  }
  return res;
}

template <typename T>
bool IsZero(const Modular<T>& number) {
  return number() == 0;
}

template <typename T>
string to_string(const Modular<T>& number) {
  return to_string(number());
}

// U == std::ostream? but done this way because of fastoutput
template <typename U, typename T>
U& operator<<(U& stream, const Modular<T>& number) {
  return stream << number();
}

// U == std::istream? but done this way because of fastinput
template <typename U, typename T>
U& operator>>(U& stream, Modular<T>& number) {
  typename common_type<typename Modular<T>::Type, int64_t>::type x;
  stream >> x;
  number.value = Modular<T>::normalize(x);
  return stream;
}

// using ModType = int;

// struct VarMod { static ModType value; };
// ModType VarMod::value;
// ModType& md = VarMod::value;
// using Mint = Modular<VarMod>;

constexpr int md = 998244353;
using Mint = Modular<std::integral_constant<decay<decltype(md)>::type, md>>;

vector<Mint> fact(1, 1);
vector<Mint> inv_fact(1, 1);

Mint C(int n, int k) {
  if (k < 0 || k > n) {
    return 0;
  }
  while ((int) fact.size() < n + 1) {
    fact.push_back(fact.back() * (int) fact.size());
    inv_fact.push_back(1 / fact.back());
  }
  return fact[n] * inv_fact[k] * inv_fact[n - k];
}

void wssert(bool) {
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    C(2 * n + 10, 0);
    vector<vector<int>> row_ones(n);
    vector<vector<int>> col_ones(n);
    vector<int> cnt_row_ones(n, 0);
    vector<int> cnt_col_twos(n, n);
    for (int i = 0; i < m; i++) {
      int x, y;
      cin >> x >> y;
      --x; --y;
      row_ones[x].push_back(y);
      col_ones[y].push_back(x);
      cnt_row_ones[x] += 1;
      cnt_col_twos[y] -= 1;
    }
    auto backup1 = cnt_row_ones;
    auto backup2 = cnt_col_twos;
    auto backup3 = row_ones;
    auto backup4 = col_ones;
    Mint ans = 0;
    auto Test = [&](auto&& self, int fx, int fy) -> void {
      cnt_row_ones = backup1;
      cnt_col_twos = backup2;
      row_ones = backup3;
      col_ones = backup4;
      if (fx != -1) {
        auto& v = row_ones[fx];
        auto it = find(v.begin(), v.end(), fy);
        if (it != v.end()) {
          // 1 -> 2
          v.erase(it);
          col_ones[fy].erase(find(col_ones[fy].begin(), col_ones[fy].end(), fx));
          cnt_row_ones[fx] -= 1;
          cnt_col_twos[fy] += 1;
        } else {
          // 2 -> 1
          row_ones[fx].push_back(fy);
          col_ones[fy].push_back(fx);
          cnt_row_ones[fx] += 1;
          cnt_col_twos[fy] -= 1;
        }
      }
      vector<vector<int>> row_by(n + 1);
      vector<vector<int>> col_by(n + 1);
      for (int i = 0; i < n; i++) {
        row_by[cnt_row_ones[i]].push_back(i);
        col_by[cnt_col_twos[i]].push_back(i);
      }
      vector<bool> row_alive(n, true);
      vector<bool> col_alive(n, true);
      int cnt_row_alive = n;
      int cnt_col_alive = n;
      vector<int> lens;
      while (cnt_row_alive > 0 && cnt_col_alive > 0) {
        {
          auto& row_ids = row_by[n - cnt_col_alive];
          if (!row_ids.empty()) {
            lens.push_back(int(row_ids.size()));
            for (int r : row_ids) {
              wssert(row_alive[r]);
              row_alive[r] = false;
              cnt_row_alive -= 1;
            }
            row_ids.clear();
            continue;
          }
        }
        {
          auto& col_ids = col_by[n - cnt_row_alive];
          if (!col_ids.empty()) {
            lens.push_back(int(col_ids.size()));
            for (int c : col_ids) {
              wssert(col_alive[c]);
              col_alive[c] = false;
              cnt_col_alive -= 1;
            }
            col_ids.clear();
            continue;
          }
        }
        if (fx != -1) {
          return;
        }
        // flip something and call Test
        vector<pair<int, int>> cells;
        {
          auto& row_ids = row_by[n - cnt_col_alive + 1];
          if (!row_ids.empty()) {
            int sz = int(row_ids.size());
            vector<int> col_ids(sz);
            for (int i = 0; i < sz; i++) {
              col_ids[i] = -1;
              for (int j : row_ones[row_ids[i]]) {
                if (col_alive[j]) {
                  wssert(col_ids[i] == -1);
                  col_ids[i] = j;
                }
              }
              wssert(col_ids[i] != -1);
            }
            if (sz == 1) {
              cells.emplace_back(row_ids[0], col_ids[0]);
            } else {
              map<int, int> mp;
              for (int i = 0; i < sz; i++) {
                mp[col_ids[i]] += 1;
              }
              if (mp.size() == 2) {
                for (int i = 0; i < sz; i++) {
                  if (mp[col_ids[i]] == 1) {
                    cells.emplace_back(row_ids[i], col_ids[i]);
                  }
                }
              }
            }
          }
        }
        {
          auto& col_ids = col_by[n - cnt_row_alive + 1];
          if (!col_ids.empty()) {
            int sz = int(col_ids.size());
            int64_t sum_alive = 0;
            for (int i = 0; i < n; i++) {
              if (row_alive[i]) {
                sum_alive += i;
              }
            }
            vector<int> row_ids(sz);
            for (int i = 0; i < sz; i++) {
              int64_t sum_alive_here = 0;
              for (int j : col_ones[col_ids[i]]) {
                if (row_alive[j]) {
                  sum_alive_here += j;
                }
              }
              row_ids[i] = int(sum_alive - sum_alive_here);
              wssert(0 <= row_ids[i] && row_ids[i] < n && row_alive[row_ids[i]]);
            }
            if (sz == 1) {
              cells.emplace_back(row_ids[0], col_ids[0]);
            } else {
              map<int, int> mp;
              for (int i = 0; i < sz; i++) {
                mp[row_ids[i]] += 1;
              }
              if (mp.size() == 2) {
                for (int i = 0; i < sz; i++) {
                  if (mp[row_ids[i]] == 1) {
                    cells.emplace_back(row_ids[i], col_ids[i]);
                  }
                }
              }
            }
          }
        }
        sort(cells.begin(), cells.end());
        cells.resize(unique(cells.begin(), cells.end()) - cells.begin());
        for (auto& [x, y] : cells) {
          self(self, x, y);
        }
        return;
      }
      Mint init = 1;
      for (int x : lens) {
        init *= fact[x];
      }
      if (fx == -1) {
        lens.push_back(cnt_row_alive + cnt_col_alive);
        for (int i = 0; i < int(lens.size()) - 1; i++) {
          Mint cells = Mint(lens[i]) * lens[i + 1];
          auto cur = init;
          cur /= lens[i];
          if (i + 1 < int(lens.size()) - 1) {
            cur /= lens[i + 1];
          }
          if (lens[i] == 1 && i > 0) {
            cur *= lens[i - 1] + 1;
          }
          if (lens[i + 1] == 1 && i + 2 < int(lens.size()) - 1) {
            cur *= lens[i + 2] + 1;
          }
          ans += cur * cells;
        }
      } else {
        ans += init;
      }
    };
    Test(Test, -1, -1);
    ans /= Mint(n) * n;
    cout << ans << '\n';
  }
  return 0;
}
