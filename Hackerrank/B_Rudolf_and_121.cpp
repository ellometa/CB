#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
void solve() {
    int n; cin>>n;
    int array[n];
    for (int &i : array) cin >> i;
        
    for (int i=0; i<(n-2); i++){

        if (array[i]<0){
            cout << "NO" << endl; return;
        }
        int op = array[i];
        array[i]-=op;
        array[i+1]-=2*op;
        array[i+2]-=op;
    }
        
    if (array[n-1] == 0 && array[n-2]==0){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}