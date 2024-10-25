#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {
    int points = 0;

    for(int i=1; i <= 10; i++){
        string s; cin>> s;

        for(int j=1; j <= 10; j++){
            int y = i;
            int x = j;
            if (s[x-1]=='X'){
                // cout << x << " " << y << " x, y old"newline;
                if (x > 5){ x= 11-x;}
                if (y > 5){ y= 11-y;}
                // cout << x << " " << y << " x, y new"newline;
                points += min(x,y);
                // cout << points newline;
                // cout << "X";
            }

        }
    }
    cout << points newline;
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