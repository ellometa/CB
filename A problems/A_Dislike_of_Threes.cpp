#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define vint vector<int>
#define pb push_back
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >>n ; int num=0; int i = 1;

    while (true) {      
        num = i++;  
        if (num % 3 == 0 || num % 10 == 3) {
            continue;
        }

        if (--n == 0) {
            cout << num << endl;
            break;
        }
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