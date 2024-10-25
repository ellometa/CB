#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

// void solve() {
//     int operations = 0;
//     int n, k; cin >> n >> k;
//     string s; cin >> s;
//     int tempindex;
//     for (int index = 0; index < n; index++){
        
//         if (s[index] == 'B'){
//             tempindex = index;

//             for (int j = 0; j <= k; j++){
//                 tempindex +=j;
//                 s[tempindex] = 'W';
//                 // std::cout << s newline;
//             }
            
//             operations+=1;
//             // cout << operations << " change" newline;
//         }
//     }
//     cout << operations newline;
// }

void solve(){  

    int n,k;    cin>>n>>k;
    string s;    cin>>s;
    int operations = 0, index = 0;
    while(index<n){
        if(s[index] == 'B'){
            index = min(n, index+k);
            operations++;
        }
        else {index++;} 
    }
    cout << operations newline;
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

