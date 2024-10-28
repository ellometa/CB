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
    int greatcounter = 0;

    int minsum = INF;
    vector<int> vecarr(n);
    for (int i =0; i < n; i++){
        int temp; cin>>temp;
        vecarr[i]=temp;
    }

    for(int it = 0; it<n; it++){

        for(int jt = 0; jt < n; jt++){
            if ( vecarr[it]<vecarr[jt]){
                greatcounter++;
            }
        }

        int sum = greatcounter + it;
        minsum = min(minsum, sum);
        greatcounter=0;
    }

    cout << minsum newline;

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