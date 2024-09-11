#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int double
#define vint vector<int>
#define pb push_back
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    int d, x, y;
    cin >> d >> x >> y;
    // d=d/100;

    // int n = 0;
    bool yes = false;
    
    for (int n = 0; n <= y; n++) {  

        double discounted = x*(1 - n*d/100.0);
        int chutta = y - n;

        if (chutta >= discounted) {
            cout << n newline;
            yes = true;
            return;
        }    
    }

    if (!yes) {
            cout << -1 newline;
        }
// }

int32_t main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}