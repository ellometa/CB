#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define vint vector<int>
#define pb push_back
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;
void solve() {
    
    int n; cin >> n; int array[n]; 
    bool odd = false; 
    int tempmin = 0, tempmax = 0;
    int counter = 0;

    for (int i = 0; i < n; i++){
        cin >> array[i];
        if(array[i]%2!=0){
            odd = true;
        }
    }

    if (odd == false){ // all even numbers here so parity maintained hai shayad
        cout << "0" newline;
        return;
    }

      
    for (int j = 0; j < n; j++) {

        int maxval = 0, minval= INF;
        //finding the maxoddval for every new array and storing the index of the maxval value in 'temp'
        for (int i = 0; i < n; i++){
            if (array[i]>maxval && array[i]%2!=0){
                maxval = array[i];
                tempmax = i;
                // cout << maxval << " " newline ;
            }
        }

        //checks whether it is even
        // if (array[j]%2==0){
        //     //check which one is smaller and that gets the sum
        //     if (array[j]<maxval){
        //         array[j]=array[j]+maxval;
        //         for (int k = 0; k< n; k++){
        //             cout << array[k] << " " ;
        //         }
        //         cout << counter newline;
        //         ++counter;
        //     }
        //     else{
        //         array[temp]=array[j]+array[temp];
        //         for (int k = 0; k< n; k++){
        //             cout << array[k] << " " ;
        //         }
        //         cout << counter newline;
        //         ++counter;
        //     }
        // }
        // lets try doing it in a while loop
        for (int i = 0; i < n; i++){
                if (array[i]<minval && array[i]%2==0){
                    minval = array[i];
                    tempmin = i;
                    // cout << maxval << " " newline ;
                }
            }
        while (array[tempmin]%2==0){
            int maxval = 0;
            //finding the maxoddval for every new array and storing the index of the maxval value in 'temp'
            for (int i = 0; i < n; i++){
                if (array[i]>maxval && array[i]%2!=0){
                    maxval = array[i];
                    tempmin = i;
                    // cout << maxval << " " newline ;
                }
            }
            //check which one is smaller and that gets the sum

            if (array[tempmin]<maxval){
                array[tempmin]=array[tempmin]+maxval;
                for (int k = 0; k< n; k++){
                    cout << array[k] << " " ;
                }
                ++counter;
                cout << "counter: " << counter newline;
            }
            else{
                array[tempmax]=array[tempmin]+array[tempmax];
                for (int k = 0; k< n; k++){
                    cout << array[k] << " " ;
                }
                
                ++counter;
                cout << "count2er: " << counter newline;
            }
        }
    }
    
    cout << "cout3ner: " << counter newline;
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