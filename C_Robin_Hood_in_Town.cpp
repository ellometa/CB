#include <bits/stdc++.h>
using namespace std;

// Define macros for convenience
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

    if(n <= 2){
        cout << -1 newline;
        return;
    }
    sort(all(a)); 
    int m = (n / 2);  
    int valueathalf = a[m];

    int x_min = 2 * n * valueathalf - S + 1;

    x_min = max(x_min, (int)0);

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
