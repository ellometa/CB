#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

// void solve() {
//     /*
//     take input
//     sort both vectors
//     solve for max dist between them
//     */
// }

int32_t main() {
    IOS;

    int t;    cin >> t;
    vector<int> workers; int temp = 0;
    while (t--) {
        cin >> temp;
        workers.push_back(temp);
    }

    cin >> t;
    int temp2 = t;
    vector<int> repairs;
    while(t--){
        cin >> temp;
        repairs.push_back(temp);
    }

    sort(workers.begin(), workers.end());
    sort(repairs.begin(), repairs.end());

    int total_dist=0;
    for (int i =0; i < temp2; i++){
        total_dist+= abs(workers[i]-repairs[i]);
    }

    cout << total_dist newline;
    return 0;
}