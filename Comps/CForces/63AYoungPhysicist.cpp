#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
    ios::sync_with_stdio(false);  cin.tie(nullptr);
    
    int t; cin >> t;    int x=0,y=0,z=0;
    int xf=0, yf=0, zf=0;
    while (t--) {
        cin >> x >> y >> z;
        xf+=x; yf+=y; zf+=z;
    }

    if (xf == 0 && yf == 0 && zf == 0){
            cout << "YES";
    }

    else {
        cout << "NO";
    }

    return 0;
}
