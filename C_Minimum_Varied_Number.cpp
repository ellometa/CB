#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define v32 vector<int>
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;

    string res = "";
    for (int i = 9; i >= 1; i--) {
      if (n >= i) {
        res += (char) ('0' + i);
        n -= i;
      }
    }
    reverse(all(res));
    cout << res << '\n';
    
}

int32_t main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}