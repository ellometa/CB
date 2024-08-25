#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
int main() {
    ios::sync_with_stdio(false);  cin.tie(nullptr);
    int x, y, t;
    ll ans;
 
    for (x=1;x<=5; x++){
        for (y=1;y<=5;y++){
            cin >> t;
            if (t==1){
                ans = abs (x-3)+abs(y-3);
            }
        }
    
    }
    cout << ans << endl;
    return 0;
}