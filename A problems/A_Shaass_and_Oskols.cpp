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
    vector<int> birds(n);

    for (auto &x:birds){
        cin >> x;
    }

    int loop; cin >> loop;

    for (int i = 1; i<=loop; i++){
        int wire, posn; cin >> wire >> posn;
        
        if (wire == 1 ){
            birds[wire] += birds[wire-1] - posn;
            birds[wire-1]=0;
            continue;
        }
        if(wire==n){
            birds[wire-2] += posn - 1;
            birds[wire-1]=0;
            continue;
            
        }

        birds[wire-2] += posn - 1;
        birds[wire] += birds[wire-1] - posn;
        birds[wire-1]=0;
    }
    
    for (int j = 0; j<n; j++){
        cout << birds[j] newline;
    }


}


int32_t main() {
    IOS;

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}