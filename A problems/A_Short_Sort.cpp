#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {
    bool flag = true;
    string s; cin >> s;

    if (s=="bca" || s=="cab"){
        flag = false;
    }

    if(flag == true){
        cout<< "YES" newline;
    }
    else{
        cout << "NO" newline;
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