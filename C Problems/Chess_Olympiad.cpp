#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

// void solve() {

// }

int32_t main() {
    IOS;

    int x, y, z;
    cin >> x >> y >> z;
    double remainingGames = 4-(x + y + z);
    double score = x*1 + y*0.5;

    if (score+remainingGames > 2.0){
        cout << "Yes" newline;
    }
    else{
        cout << "No" newline;
    }


    return 0;
}