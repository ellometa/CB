#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    
    vector<int> teacher(m);
    for (int i = 0; i < m; i++) {
        cin >> teacher[i];
    }


    sort(teacher.begin(), teacher.end());
    

    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        
        auto rightbeacon = lower_bound(teacher.begin(), teacher.end(), a);
        auto leftbeacon = rightbeacon; leftbeacon--;

        int ans = 0;
        if (rightbeacon == teacher.end()) {
            ans = n - teacher[m - 1];
        } 
        else if (rightbeacon == teacher.begin()) {
            ans = teacher[0] - 1;
        }
        else {
            ans = (*rightbeacon - *leftbeacon) / 2;
        }
        cout << ans << "\n";
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