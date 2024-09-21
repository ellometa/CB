#include <bits/stdc++.h>

using namespace std;

#define AKY AayushKYadav ^_^
#define ll long long 
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define v32 vector<int>
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, k;    cin >> n >> k;
   
    ll start= max(1LL, n-k+1);
    ll sum = (n*(n+1)/2) - (start*(start-1)/2);

    sum%2==0?cout<<"YES" newline:cout<<"NO"newline;
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