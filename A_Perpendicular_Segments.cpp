#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    int x,y,k; cin >>x>>y>>k;

    int smaller = min(x,y);


    cout << "0 0" << " " << smaller << " " << smaller << " " newline;
    cout << 0 << " " << smaller << " " << smaller << " " << 0 newline;


}

int32_t main() {
    IOS;

    int t;
    // t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}