#include <bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }
    
    for (int i = 0; i < n; i += k) {
        for (int j = 0; j < n; j += k) {
            cout << grid[i][j];
        }
        cout newline;
    }
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
