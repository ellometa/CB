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

    int n; cin >> n;
    int odd=0, even=0;

    for(int i =0; i<n; i++){

        int temp; cin >> temp;

        temp%2==0?++even:++odd;

    }

    if (odd!=0){
        cout << even + 1 + ((odd-1)/2) newline ;
        return;
    }
    else{
        cout << "0" newline;
        return;
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


/*
 1 2 4 3
1 3 7 10

- if it has one odd, then every subsequent even integer
- is a certain odd prefix sum and then total + 1
*/