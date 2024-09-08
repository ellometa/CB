#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define vint vector<int>
#define pb push_back
#define newline <<'\n'

void solve() {
    
    // quotient < floor [ (n-y)/x ]

    int x, y, n; cin >> x >> y >> n;

    int quotient = floor ((n-y) / x);
    cout << quotient*x + y newline;
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