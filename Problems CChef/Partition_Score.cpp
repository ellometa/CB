#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define v32 vector<int>
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    int n, k;
    cin >> n >> k;
    vector<int> val(n);

    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    sort(all(val));

    if (k == 1) {
        cout << val[0] + val[n - 2] + 2 * val[n - 1] newline;
    } 
    else {
        int result = val[0] + val[n - k - 1] + val[n - 1] + val[n - 2];
        cout << result newline;
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