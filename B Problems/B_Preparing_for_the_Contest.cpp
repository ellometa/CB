#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define v32 vector<int>
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, k; cin >> n >> k;

    for (int i = n; i > (1+k); i--){
        cout << i << " ";
    }
    for (int i = 1; i <= (1+k); i++){
        cout << i << " ";
    }
    cout newline;
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

/*
6 2
1 2 3 4 5 6
6 5 4 3 2 1
reverse the last 3
easy
6 5 4 1 2 3

Monocarp is practicing for a big contest. 
He plans to solve n problems to make sure he's prepared. 
Each of these problems has a difficulty level: 
  the first problem has a difficulty level of 1
, the second problem has a difficulty level of 2
, and so on, until the last (n-th) problem, which has a difficulty level of n
.

Monocarp will choose some order in which he is going to solve all n problems. 
Whenever he solves a problem which is more difficult than the last problem he solved, 
he gets excited because he feels like he's progressing. 
He doesn't get excited when he solves the first problem in his chosen order.

For example, if Monocarp solves the problems in the order [3,5–,4,1,6–,2]
, he gets excited twice (the corresponding problems are underlined).

Monocarp wants to get excited exactly k times during his practicing session. 
Help him to choose the order in which he has to solve the problems!


*/