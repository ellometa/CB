#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(x) (x).begin(), (x).end()
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    // vector<int> arr(n);
    // for (int i = 0; i < n; i++) cin >> arr[i];

    int start1, end1, start2, end2; 
    cin >> start1 >> end1 >> start2 >> end2;

    int maxStart = max(start1, start2), minStart = min(start1, start2);
    int maxEnd = max(end1, end2), minEnd = min(end1, end2);

    if (start2 > end1 || start1 > end2) {
        cout << 1 newline;
        return;
    }

    int result = 0;

    if (minEnd > maxStart) result += minEnd - maxStart;
    if (minEnd < maxEnd) result++;
    if (minStart < maxStart) result++;

    cout << result newline;

}

int32_t main() {
    IOS;

    int t;    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}