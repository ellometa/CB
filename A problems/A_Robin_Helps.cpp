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
    int n, threshold; cin >> n >> threshold;
    int wallet = 0;
    int counter = 0;
    for (int i =0; i<n; i++){
        int temp; cin >> temp;
        if (temp >= threshold){
            wallet+=temp;
        }
        else{
            if(temp == 0 && wallet != 0){
                --wallet;
                ++counter;
            }
        }
    }
    cout << counter newline;

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