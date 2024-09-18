#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {


    int numRows, numCols;
    cin >> numRows >> numCols;
    int maxRow = -1;
    string maxStr;
    int maxHashes = 0;
    for (int i = 0; i < numRows; i++) {
        string rowStr;
        cin >> rowStr;
        int hashCount = count(rowStr.begin(), rowStr.end(), '#');
        if (hashCount > maxHashes) {
            maxHashes = hashCount;
            maxRow = i;
            maxStr = rowStr;
        }
    }

    int centrecol = 0;
    int offset = ceil(maxHashes / 2.0);    
    for (int i = 0; i < numCols; i++) {
        if (maxStr[i] == '#') {
            centrecol = i + offset;
            break;
        }
    }
    
    cout << maxRow + 1 << " " << centrecol << '\n';

    return;
    /*
    - find hash string and its centre
    - do it for the next line it doesnt matter
    - do it until you find the longest hash string in the text
    - if next hash string is smaller than the previous, then congrats you found it, but keep inputting

    after all this nonsense print out the final row and column of the centre of the longest hash string


    for looping the rows
        input the string
        -find longest hash, store the row it is in, also store the length
    }
    after longest hash has been found, find its centre


    */

    // for (int i = 0; i < rows; i++){
    //     string s; cin >> s;

    //     for (int j = 0; j < col; j ++){

    //         if(s[j]=='#'){
    //             if (flag == 0){
    //                 anscol = j;
    //                 ++flag;
    //             }
    //             int start = index;
    //             while (index < col && s[index] == '#') {
    //                 index++;
    //             }
    //             int end = index;
    //             // Calculate the center index
    //             int centerIndex = (start + end - 1) / 2;
    //         }
    //     }
    // }
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