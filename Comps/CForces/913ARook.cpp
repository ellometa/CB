#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void solve() {
    

}

int main() {
    IOS;

    int t, n, x, i;
    cin >> t;
    while (t--) {

        cin >> n >> x;
        vector<int> vec(n);
        for(i = 0; i < n; ++i) {cin >> vec[i];} //input


        int ans = max(vec[0], 2 * (x - vec[n - 1]));
 
        for(int i = 0; i < n - 1; i++){
        ans = max(ans, vec[i + 1] - vec[i]);}
        cout << ans << endl;
    }

    return 0;
}