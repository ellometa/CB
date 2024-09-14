#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {

    /*
    
    aaeiou
    has only 1 palindrome
    aaeeiioouu
    has only 5 palindromes
    aaaeeiioouu
    has 7
    
    */
    int n; cin >> n;
    string s = "aeiou";
    int baseRepeat = n / 5; 
    int extra = n % 5;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < baseRepeat; ++j) {
            cout << s[i];
        }
        if (i < extra) {
            cout << s[i];
        }
    }
    cout << endl;


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