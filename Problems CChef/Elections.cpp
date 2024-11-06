#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    int states; cin >> states;
    int votes; cin >> votes;

    int requiredwins = states/2 + 1;


    vector<int> veca(states);
    for (auto &x : veca){ cin >> x;}
    vector<int> vecb(states);
    for (auto &x : vecb){ cin >> x;}


    vector<int> needed;
    int wins = 0;

    for (int i = 0 ; i < states; i++){

        if (veca[i]<=vecb[i]){
            needed.push_back(vecb[i]-veca[i]+1);
        }

        else{
            ++wins;
        }
    }

    if (wins >= requiredwins){
        cout << "YES" newline;
        return;
    }


    sort(all(needed));
            
    for (int i = 0; i < needed.size(); i++) {

        if (votes >= needed[i]) {
            votes -= needed[i];
            ++wins;

            if (wins >= requiredwins) {
                cout << "YES" newline;
                return;
            }
        } 
        else {
            break;
        }
    }
    
    cout << "NO" newline;

}

int32_t main() {
    IOS;

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

/*


The first line of each test case contains two space-separated integers 
N and X — the number of states and the number of votes Chef can cast.
The second line contains 
N space separated integers denoting the number of votes received by candidate 
A in each state.
The third line contains 
N space separated integers denoting the number of votes received by candidate 
B in each state.
*/