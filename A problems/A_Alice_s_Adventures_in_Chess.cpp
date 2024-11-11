#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    int n, a, b; cin >> n >> a >> b;

    string s; cin >> s;
    int x = 0, y =0;


    for(int j = 0; j < 50; j++){
        for(int i = 0 ; i < n; i++){
            if (s[i]=='N'){
                ++y;
            }
            else if (s[i]=='S'){
                --y;
            }
            else if (s[i]=='E'){
                ++x;
            }
            else if (s[i]=='W'){
                --x;
            }
            

            if(x==a && y==b){
                cout<< "YES" newline;
                return;
            }
        }

    }


    cout<< "NO" newline;

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