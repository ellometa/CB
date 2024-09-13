#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define vint vector<int>
#define pb push_back
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {

}

int32_t main() {
    IOS;

    int total = 0, a, b;
    
    for (int i = 1; i<=3; i++){
        cin >> a >> b;
        total+=max(a,b);
    }
    cout << total;

    return 0;
}