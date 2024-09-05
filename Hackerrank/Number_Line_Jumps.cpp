#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    IOS;

    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    if ((v1 != v2 && (x2 - x1) % (v1 - v2) == 0 && (x2 - x1) / (v1 - v2) >= 0)) {
        cout << "YES";
    } 
    else if ( x1 == x2){
        cout << "YES";
        
    }
    else {
        cout << "NO";
    }

    return 0;
}