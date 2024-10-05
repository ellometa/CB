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
    int32_t n, k;
    cin >> n >> k;

    int operations = 0;

    while (n > 0) {
        int x = floor(log(n)/log(k));
        int largest_power = pow(k, x);
        if (largest_power==99){largest_power=100;}
        n -= largest_power;
        operations++;
        // cout newline << "operation number " <<  operations << " " << largest_power << " " << n << " ";
    }

    cout << operations newline;
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
