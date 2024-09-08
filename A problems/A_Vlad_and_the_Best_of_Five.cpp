#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define vint vector<int>
#define pb push_back
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    string s; cin >> s;
    int acounter=0;
    for (int i = 0; i < 5; i++){
        if (s[i]=='A'){
            ++acounter;
        }
    }
    if (acounter > (5-acounter)){
        cout << "A" newline;
    }
    else{
        cout << "B" newline;
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