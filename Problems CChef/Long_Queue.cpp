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
    vector<int> wealth(n);
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        wealth[i]= temp;
    }


    int half = wealth[n-1]/2;

    // cout << wealth[n-1]<< " " << half newline; 
    int position = n;
    for(int i = (n-2); i>=0; i--){
        if (wealth[i]<=half){
            position--;
        }
        else{
            break;
        }
    }

    cout<< position newline;
    

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