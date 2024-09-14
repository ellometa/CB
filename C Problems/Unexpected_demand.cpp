#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

// void solve() {

// }

int32_t main() {
    IOS;

    int t;    cin >> t;
    int temp2 = t;    vector<int> varr ;
    while (temp2--){
        int temp;cin >> temp;
        varr.push_back(temp);
    }

    sort(varr.begin(), varr.end()); 

    int stock; cin >> stock;
    int counter = 0, sum=0;

    for (int i = 0; i<t; i++){
        sum+=varr[i];
        if (sum<=stock){
            counter=i+1;
        }
        else{
            break;
        }
    }

    cout << counter newline;
    return 0;
}