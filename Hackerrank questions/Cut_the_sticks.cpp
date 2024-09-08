#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long


int main() {
    IOS;

    int t;
    cin >> t; int j = t;
    vector<int> numberarray;
    
    while (t--) {
        int temp;
        cin >> temp;
        numberarray.push_back(temp);
    }
    int min = numberarray[0];
    while (numberarray.size() != 0){
        
        cout << numberarray.size() << '\n';

        min = numberarray[0];
        for (int i = 0; i < numberarray.size(); i++){
            min = std::min(numberarray[i], min);
        }
        
        for (int j = numberarray.size()-1; j >= 0; j--){
            numberarray[j]-=min;
            if (numberarray[j] <= 0){
                numberarray.erase(numberarray.begin() + j);
            }
        }
    }

    

    return 0;
}