#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    int n; cin >> n;
    int x; cin >> x;

    int even = n/2;
    int odd = n - even;

    if (x%2==0){
        cout << even - 1 newline;
    }
    else{
        cout << odd - 1 newline;
    }
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
im given n cards
remove one 
find how many pairs of n -1 and a number can be even
*/