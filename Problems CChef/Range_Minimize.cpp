#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;

    vector<int> v(n);
    for(auto &it:v){ cin >> it;}

    sort(v.begin(), v.end());

    int r1= v[n-1] - v[2], r2 = v[n-3] - v[0], r3 = v[n-2]-v[1];
    
    int temp = min(r1, r2);
    int final = min(temp, r3);

    cout << final << endl;
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