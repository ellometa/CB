#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {

    vector <int> varr(3);
    for(int i =0 ; i<3; i++){
        cin >> varr[i];
    }

    sort (varr.begin(), varr.end());

    int temp = varr[0]==varr[1]?varr[2]:varr[0];

    cout << temp newline;




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