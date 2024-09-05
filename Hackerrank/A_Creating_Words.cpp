#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void solve() {
    string l, r;
    cin >> l >> r;

    char c = l[0];
    l[0] = r[0];
    r[0] = c;
    cout << l << " " << r << endl;

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