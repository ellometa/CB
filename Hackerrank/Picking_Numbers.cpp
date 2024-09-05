#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void solve() {
    

}

int main() {
    IOS;

    int t, temp;
    cin >> t;
    vector<int> real; 
    for (int i = 0; i < t ; i++){
        cin >> temp;
        real.push_back(temp);
    }
    int counter=0, maxnum = 0;
    for (int k=0; k<t; k++){
        
        for (int l=0; l<t; l++){
            if (real[k]==real[l] || real[k]==(real[l]+1)){
                ++counter;
            }

        }
        maxnum = max(maxnum, counter);
        counter = 0;
    }

    cout << maxnum;
    return 0;
}