#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define lil long long int

int main() {
    IOS;

    lil budget, keyb, mice;
    cin >> budget >> keyb >> mice;

    vector<int> keybprice;
    for (int i =0; i < keyb; i++){
        int temp;    cin >> temp;
        keybprice.push_back(temp);
    }
    vector<int> mouseprice;
    for (int i =0; i < mice; i++){
        int temp;    cin >> temp;
        mouseprice.push_back(temp);
    }

    int maxsum=-1;

    for(int i=0; i<keyb;i++){
        for (int j=0; j<mice;j++){

            int sum=keybprice[i]+mouseprice[j];
            
            if( sum > maxsum && sum <= budget){
                maxsum=sum;
            }
        }
    }
    cout << maxsum;

    return 0;
}