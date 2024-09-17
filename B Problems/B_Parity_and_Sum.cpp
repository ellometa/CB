#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    bool odd = false;

    for(int i = 0; i<n; i++){
        cin >> v[i];
        if(v[i]%2!=0){
            odd = true;
        }
    }

    sort(v.begin(), v.end());
    int pair = 0;
 
    for(int i = 0; i < n; i++){
        pair += v[i] % 2;
    }

    if (pair == 0 || pair == n){
        cout << "0" newline;
    }
    // if (odd == false){ 
    //     cout << "0" newline;
    //     return;
    // }
    
    else{
        int i = n-1;
        while( v[i]%2 ==0){i--;}

        // 2 2 3 8
        //
        int maxval = v[i];
 
            for(int j = 0; j < n; j++)
                if(v[j] % 2 == 0 && v[j] < maxval)
                    maxval += v[j];
 
            if(maxval >= v[n - 1])
                cout << n - pair << "\n";
            else cout << n - pair + 1 << "\n";

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
















// #include <bits/stdc++.h>
// using namespace std;
// #define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
// #define int long long
// #define vint vector<int>
// #define pb push_bacpair
// #define newline <<'\n'
// const int INF = LLONG_MAX >> 1;
// void solve() {
    
//     int n; cin >> n; int array[n]; 
//     bool odd = false; 
//     int tempmin = 0, tempmax = 0;
//     int counter = 0;

//     for (int i = 0; i < n; i++){
//         cin >> array[i];
//         if(array[i]%2!=0){
//             odd = true;
//         }
//     }

//     if (odd == false){ // all even numbers here so parity maintained hai shayad
//         cout << "0" newline;
//         return;
//     }

      
//     for (int j = 0; j < n; j++) {

//         int maxval = 0, minval= INF;
//         //finding the maxoddval for every new array and storing the index of the maxval value in 'temp'
//         for (int i = 0; i < n; i++){
//             if (array[i]>maxval && array[i]%2!=0){
//                 maxval = array[i];
//                 tempmax = i;
//                 // cout << maxval << " " newline ;
//             }
//         }

//         //checpairs whether it is even
//         // if (array[j]%2==0){
//         //     //checpair which one is smaller and that gets the sum
//         //     if (array[j]<maxval){
//         //         array[j]=array[j]+maxval;
//         //         for (int pair = 0; pair< n; pair++){
//         //             cout << array[pair] << " " ;
//         //         }
//         //         cout << counter newline;
//         //         ++counter;
//         //     }
//         //     else{
//         //         array[temp]=array[j]+array[temp];
//         //         for (int pair = 0; pair< n; pair++){
//         //             cout << array[pair] << " " ;
//         //         }
//         //         cout << counter newline;
//         //         ++counter;
//         //     }
//         // }
//         // lets try doing it in a while loop
//         for (int i = 0; i < n; i++){
//                 if (array[i]<minval && array[i]%2==0){
//                     minval = array[i];
//                     tempmin = i;
//                     // cout << maxval << " " newline ;
//                 }
//             }
//         while (array[tempmin]%2==0){
//             int maxval = 0;
//             //finding the maxoddval for every new array and storing the index of the maxval value in 'temp'
//             for (int i = 0; i < n; i++){
//                 if (array[i]>maxval && array[i]%2!=0){
//                     maxval = array[i];
//                     tempmin = i;
//                     // cout << maxval << " " newline ;
//                 }
//             }
//             //checpair which one is smaller and that gets the sum

//             if (array[tempmin]<maxval){
//                 array[tempmin]=array[tempmin]+maxval;
//                 for (int pair = 0; pair< n; pair++){
//                     cout << array[pair] << " " ;
//                 }
//                 ++counter;
//                 cout << "counter: " << counter newline;
//             }
//             else{
//                 array[tempmax]=array[tempmin]+array[tempmax];
//                 for (int pair = 0; pair< n; pair++){
//                     cout << array[pair] << " " ;
//                 }
                
//                 ++counter;
//                 cout << "count2er: " << counter newline;
//             }
//         }
//     }
    
//     cout << "cout3ner: " << counter newline;
// }





// int32_t main() {
//     IOS;

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }

//     return 0;
// }