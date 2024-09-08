#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long


int main() {
    IOS;

    int arr1[3], arr2[3];

    cin >> arr1[0] >> arr1[1] >> arr1[2];
    cin >> arr2[0] >> arr2[1] >> arr2[2];
    int j=0, k=0;

    for(int i=0; i<3; i++){
        if (arr1[i]>arr2[i]){
            ++j;
        }
        else if (arr1[i]==arr2[i])
        {
            continue;
        }
        
        else{
            ++k;
        }
    }
    cout << j <<" "<< k;

    return 0;
}