#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    int n;    cin>>n;
    int arr[2*n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i + n] = arr[i];
    }
    for(int i=0;i<n;i++){
        bool sorted = true;

        for(int j=1;j<n;j++) {
            if (arr[i + j] < arr[i + j - 1]) {
                sorted = false;
                break;
            }
        }

        if(sorted){
            cout<<"Yes" newline;
            return;
        }
    }
    cout<<"No" newline;
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