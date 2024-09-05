#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void solve() {
    int n; string s;
        cin >> n >> s;
        int root = sqrt(n);
        if (root * root != n){
            cout << "No\n";
        } 
        else{
            bool yes = 1;

            for (int i = 0; i < root; i++) {

                for (int j = 0; j < root; j++) {

                    if (i == 0 || j == 0 || j == root - 1 || i == root - 1 ) {
                        if (s[i * root + j] == '0') yes = 0;
                        
                    } 
                    else {
                        if (s[i * root + j] == '1') yes = 0;
                    }
                }
            }
            cout << (yes ? "Yes\n" : "No\n");
        }
}

int main() {
    IOS;

    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}