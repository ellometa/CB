#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define lil long long
#define vint vector<int>
#define pb push_back
#define newline <<'\n'

void solve() {
    int a, b, c; cin >> a >> b >>c;
    if(a < b && b < c){
        cout << "STAIR" newline;
    }
    else if (a < b && b > c){
        cout << "PEAK"  newline;
    }
    else{
        cout<< "NONE" newline;
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