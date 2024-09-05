#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    IOS;
    int sum=0, minsum=1000;
    vector<vector<int>> numbers = {{8, 1, 6, 3, 5, 7, 4, 9, 2}, {6, 1, 8, 7, 5, 3, 2, 9, 4},
                                {4, 3, 8, 9, 5, 1, 2, 7, 6}, {2, 7, 6, 9, 5, 1, 4, 3, 8},
                                {2, 9, 4, 7, 5, 3, 6, 1, 8}, {4, 9, 2, 3, 5, 7, 8, 1, 6},
                                {6, 7, 2, 1, 5, 9, 8, 3, 4}, {8, 3, 4, 1, 5, 9, 6, 7, 2}};
            
    vector<int> real;

    for (int k=0; k< 9; k++){
        cin >> real[k];
    }

    for(int i =0; i < 8; i++){
        sum = 0;
        for (int j=0; j<9; j++){
            sum+=abs(numbers[i][j]-real[j]);
        }
        minsum = min(minsum, sum);
    }


    cout << minsum;
    return 0;
}