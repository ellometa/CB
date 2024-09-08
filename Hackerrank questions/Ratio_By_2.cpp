#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define lil long long
#define vint vector<int>
#define pb push_back
#define newline <<'\n'

void solve() {
    int x, y; cin >> x >> y;
    lil result = min(x, y) - max(x, y)/2;
    cout << result << " " << max(0LL, result) << endl;

}

int main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}