#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define v32 vector<int>
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    string s1, s2; cin >> s1 >> s2;

    int length = min(s1.length(), s2.length());
        
    for (int i = 0; i < length; i++){
        if (s1[i] != s2[i]) {
            cout << i + 1 newline; 
            return;
        }
    }

    if (s1.length() != s2.length()) {
        cout << length + 1 << '\n'; 
    } else {
        cout << 0 << '\n'; 

    }
}


int32_t main() {
    IOS;
    solve();
    

    return 0;
}