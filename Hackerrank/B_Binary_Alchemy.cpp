
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

    int t;
    cin >> t;
    int array[t + 1][t + 1];

    for (int i = 1; i <= t; i++) {

        for (int j = 1; j <= i; j++) {
            std::cin >> array[i][j];
        }
    }

    int currente = 1;

    for (int k = 1; k <= t; k++){
        if (currente >= k){
            currente = array[currente][k];
        }
        else{
            currente= array[k][currente];
        }
    }

    cout << currente newline;
    return 0;
}
