#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

bool isaString(int n, const string& s) {
    for (int i = 1; i < n; ++i) {
        if (s[i-1] != s[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    IOS;
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if (isaString(n, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
