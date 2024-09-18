#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {

    /*
    - calc hamming distance at runtime
    - if you encounter a ? then search its column up and down for a bimary and make sure its the conjugate of its adjacent
    - if there are still no binary in that row then alternate it
    */
   
    int n, m; cin >> n >> m;
    char array [m][n];


    for(int i =0; i < m;i++){
        string s; cin >> s;
        for (int j = 0; j < n; j++){
            array[i][j]=s[j];
        }
    }

    for (int i = 0; i < m; i++){
        for(int j = 0; j<n; j++){

            



        }
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