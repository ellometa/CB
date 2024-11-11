#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    int l, r, k;
    cin >> l >> r >> k;
    int operations;
    operations = r/k - l + 1;
    if (operations < 0){
        cout << 0 newline; return;
    }
    cout << operations newline;

}

int32_t main() {
    IOS;

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

/*
Each test contains multiple test cases. 
The first line of the input contains a single integer t

The only line of each test case contains three integers l, r, and k

the minimum integer in S, the maximum integer in S, and the parameter k
.
 output:
  maximum possible number of operations that can be performed.


*/