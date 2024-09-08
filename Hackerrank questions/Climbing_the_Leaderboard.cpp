#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define lil long long

void solve() {
    int ranked, players;
    cin >> ranked;
    vector<int> rankedarray(ranked);
    
    for (int i = 0; i < ranked; i++) {
        cin >> rankedarray[i];
    }
    
    rankedarray.erase(unique(rankedarray.begin(), rankedarray.end()), rankedarray.end());
    ranked = rankedarray.size(); // Update ranked to reflect the new size after removing duplicates
    
    cin >> players;
    vector<int> playerarray(players);
    for (int i = 0; i < players; i++) {
        cin >> playerarray[i];
    }
    

    int j = ranked - 1;
    for (int i = 0; i < players; i++) {
        while (j >= 0 && playerarray[i] >= rankedarray[j]) {
            
            j--;
        }
        cout << j + 2 << endl; // j+2 because rank starts from 1
    }
}

int main() {
    IOS;
    solve();
    return 0;
}
