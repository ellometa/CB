#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define vint vector<int>
#define pb push_back
#define newline <<'\n'

void solve() {
    /*
    -just vector (this was a bad idea, i should have tried with arrays)
    -check if its unique
    -if not unique then check its index and search for the value for same index in replic vector
    -print the raw input concatenated with replic[i]
    -store number of repititions in another vector with same index value as original
    -
    */
   
}

int32_t main() {
    IOS;

    int n; cin >> n;
    string array[n];
    int counter[n]={0};
    int unique=0;

    for (int i = 0; i < n; ++i) {

        string temp;
        cin >> temp;

        bool notunique = false;

        for (int j = 0; j < unique; j++){
            
            if (array[j]==temp){
                notunique = true;
                ++counter[j];
                cout << temp << counter[j] newline;
                break;
            }
        }

        if (notunique== false){
            array[unique] = temp;
            counter[unique]=0;
            ++unique;
            cout << "OK" newline;
        }

    }


    // for (int i = 0; i<n; i++){
    //     string str;
    //     array.push_back(str);
    //     replic.push_back(0);
    // }
    // for (int i = 0; i<n; i++){
    //     for (int j = 0; j < i ; j++){
    //         if (array[i]==array[j]){
    //             replic[j]+=1;
    //             cout << array[i] << replic[j] newline;
    //             break;
    //         }
    //         else{
    //             cout << "OK" newline;
    //         }
        
    //     }
    // }
    return 0;
}

  
