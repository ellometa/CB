#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {
    int n;    cin >> n;
    
    vector<int> a(n);

    int oddcount = 0, evencount = 0;
    int logodd = -1, logeven = -1;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) {
            evencount++;
            logeven = i;
        } 
        else {
            oddcount++;
            logodd = i;
        }
    }
    if (oddcount == 1) {
        cout << logodd + 1 newline;
    } 
    else {
        cout << logeven + 1 newline;
    }
}

int32_t main() {
    IOS;

    solve();

    return 0;
}
