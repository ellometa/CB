#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    int n; cin>> n;
    int min = INF;
    vector<int> vec(n);
    int flag;
    for (int i = 0; i<n; i++){
        int temp; cin >>temp;
        vec[i]=temp;
        if (min > temp){
            min = temp;
            flag = i;
        }
    }
    vec[flag]+=1;
    int prod = 1;
    for (int i = 0; i<n; i++){

        prod*=vec[i];

    }
    cout << prod newline;

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