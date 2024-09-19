#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {

    /*
    find value of n = 300-m;
    ye value pe penalty calculate kar
    agar nahi nikla then go by the formula
    find minimum of both
    */

    int m, p; cin >> m >> p;

    int n1= 299-m;

    int n2 = (1000-m-p)/21;

    cout << std::min(n1, n2) newline;

    
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