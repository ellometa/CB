#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {

/*
check if sum is even at runtime
also hold on to the biggest odd number just in case
start hacking away on the bigodd until its either 0 or even
count the number of loops it ran
*/

int n; cin >> n;
vector<int> v(n);    int largestOdd = -1, sum=0;
for (int i =0; i<n; i++){
    cin >> v[i];

    sum+=v[i];

    if (v[i] % 2 != 0) {  // Check if the number is odd
        largestOdd = max(largestOdd, v[i]);  // Update largestOdd using max()
    }
}
int counter = 0;
if (sum%2 == 0){
    cout << 0 newline;
}
else{
    while (largestOdd%2!=0){
        largestOdd/=2;
        ++counter;
    }
    cout << counter newline;
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