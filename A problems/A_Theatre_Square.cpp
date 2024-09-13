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

    int n, m, a;    cin >> n >> m >> a;
    int ncounter = 0, mcounter=0;

    if ((n%a)!=0){
        ncounter = 1;
    }
    if ((m%a)!= 0){
        mcounter = 1;
    }
    cout << (n/a + ncounter)*(m/a + mcounter);
 
    return 0;
}