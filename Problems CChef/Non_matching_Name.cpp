#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    int an, bn; cin >> an >> bn;

    string a,b; cin >> a >> b;
    string combined = a+b;

    set<char> cset (all(combined));

    long long asciisum = 0;
    
    for (char c : cset){ asciisum += static_cast<long long>(c);}

    if (asciisum < 2847){
        cout << "Yes" newline;
        // cout << asciisum newline;
    }
    else{
        cout << "No" newline;
        // cout << asciisum newline;
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

