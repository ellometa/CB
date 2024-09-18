#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {

    int n, m; 
    cin >> n >> m;
    string s, c;
    cin >> s;
    vector <int> ind(m);
    for (int &x : ind) cin >> x, x--;
    cin >> c;

    sort(c.begin(), c.end());
    sort(ind.begin(), ind.end());

    auto it = unique(ind.begin(), ind.end());  
    ind.erase(it, ind.end());    

    for (int i = 0; i < ind.size(); ++i) {
        s[ind[i]] = c[i];
    }
    cout << s << '\n';

    return;
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