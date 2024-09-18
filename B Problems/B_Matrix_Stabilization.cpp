#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    int rows, col;  cin >> rows >> col;
    int max = -INF;
    

    int ogMatrix[rows][col];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> ogMatrix[i][j];
        }
    }




    int directionRow[] = {-1, 0, 0, 1}; 
    int directionCol[] = {0, -1, 1, 0};    

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {

            int maxAdj = 0; 

            for (int k = 0; k < 4; ++k) {
                int newRow = i + directionRow[k];
                int newCol = j + directionCol[k];

                if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < col) {
                    maxAdj = std::max(maxAdj, ogMatrix[newRow][newCol]); 
                }
            }

            
            if (ogMatrix[i][j] > maxAdj) {
                ogMatrix[i][j] = maxAdj;
            }
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << ogMatrix[i][j] << " ";
        }
        cout newline;
    }
    

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