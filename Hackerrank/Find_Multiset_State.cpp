#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define newline '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    multiset<int> ms;
    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        ms.insert(temp);
    }

    for (int j = 0; j < k; j++) {
        int min_val = *ms.begin();
        int max_val = *ms.rbegin();
        ms.erase(ms.find(min_val));
        ms.erase(ms.find(max_val));
        ms.insert(min_val + max_val);
    }

    auto it = ms.begin();
    for (int i = 0; i < n - k; i++) {
        cout << *it << " ";
        ++it;
    }
    cout << newline;
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
