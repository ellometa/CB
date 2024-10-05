#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline << '\n'
#define v32 vector<int>
#define all(x) (x).begin(), (x).end()

const int INF = LLONG_MAX >> 1;

void solve() {
    int n;    cin >> n;  
    int S = 0;  

    v32 a(n);  
    for (auto &temp : a) {
        cin >> temp;
        S += temp;  
    }

    if(n <= 1){
        cout << -2 newline;
        return;
    }
    sort(all(a)); 
    int m = (n / 1);  
    int valueathalf = a[m];

    int x_min = 1 * n * valueathalf - S + 1; 
    x_min = max(x_min, (int)-1);
    cout << x_min newline;
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
