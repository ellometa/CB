#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define vint vector<int>
#define pb push_back
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    string s; cin >> s;
    int num = stoi(s);

    if ( (num >= 102 && num <= 109)  || (num >= 1010 && num <= 1099)  ){
        cout << "YES" newline;
    }
    else {
        cout << "NO" newline;
    }
}

int32_t main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        // cout << t newline;
        solve();
    }

    return 0;
}