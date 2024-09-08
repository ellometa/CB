#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define lil long long

void solve() {
    

}

int main() {
    IOS;

    lil t, currentn, maxcount ;
    cin >> t >> currentn;
    lil max = currentn;
    maxcount=1;

    --t;
    
    while (t--) {
        cin >> currentn;
        if (currentn>max){max=currentn; maxcount=1;}
        else if (currentn==max){++maxcount;}
        // cout << currentn << " " << maxcount << " " << max << " " << endl;
    }
    cout << maxcount;
    return 0;
}

