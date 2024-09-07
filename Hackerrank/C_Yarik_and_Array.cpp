#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define vint vector<int>
#define pb push_back
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n; 
    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    int minval = min(0, array[0]); 
    
    int sum = array[0], result = array[0];

    for (int i = 1; i < n; i++) {
        if (abs(array[i] % 2) == abs(array[i - 1] % 2)) {
            minval = 0;
            sum = 0;
        }
        sum += array[i];
        result = max(result, sum - minval);
        if (sum < minval){ minval = sum;}
    }
    cout << result << endl;

    // int maxval = -INF;
    // int previouselement; cin >> previouselement;
    // bool previousparity;

    // previouselement%2==0?previousparity = true:previousparity = false;
    // int sum = previouselement;

    // for (int i = 1; i < n; i++){
    //     int value;        cin >> value;
    //     bool valueparity;
    //     value%2==0?valueparity=true:valueparity=false;
    //     cout << previouselement << " " << value << " " << sum << " " << maxval << " " newline;
    //     if (valueparity==previousparity){
    //         previousparity=valueparity;
    //         sum = 0;
    //         //reset
    //     }
    //     else{
            
    //         sum+=value;
    //         maxval = max(sum, maxval);
    //         previouselement=value;
    //         previousparity=valueparity;
    //         //sum them
    //     }
    //     cout << previouselement << " " << value << " " << sum << " " << maxval << " " newline;
    // }
    // cout << maxval newline;

    /*
    fuck it, lets do it at runtime
    check first element if even or odd, that is stored in a bool 
    

    */
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