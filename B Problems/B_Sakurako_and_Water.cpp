#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    //go through every diagonal and take the minimum and add it 

    int n;    cin >> n;  
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int diagsize = 2*n-1;

    vector<int> diagonals(diagsize); 

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            
            int diagcoord = i - j + n - 1;

            int temp = min(matrix[i][j], diagonals[diagcoord]);

            diagonals[diagcoord] = temp;

        }
    }

    int sum = 0;

    for (int i = 0; i < diagonals.size(); i++){
        if(diagonals[i] < 0){
            sum += abs(diagonals[i]);
        }
    }

    cout << sum newline;
    
}

int main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

