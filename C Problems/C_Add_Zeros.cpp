#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    int n; cin >> n;
    vector<int> vecarr(n);
    for(int i = 0; i<n; i++){
        int temp; cin >> temp;
        vecarr[i]= temp + i + 1;
    }

    bool flag = true;

    int size1 = n;

    for(int j = 0; j < n; j++){

        for (int i = n; i >= 0 ; i--){

            if(vecarr[i-1]==size1+1 ){

                size1= size1 + i-1;
                // flag = true;
                // cout << size1 << " " newline;
            }
            

        }

    }
    
    int size2 = n;
    for(int j = 0; j < n; j++){

        for (int i = 1; i <=n ; i++){

            if(vecarr[i-1]==size2+1 ){

                size2= size2 + i-1;
                // flag = true;
                // cout << size2 << " " newline;
            }
            

        }

    }


    cout << max(size1, size2) newline;


}

int32_t main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        solve();
        // cout << "Case # " << t newline;
    }

    return 0;
}


/*


(sa+1) - i = a[i]

if a[i]+i = 6

1 2 3 4 5
0 1 2 3 4
2 4 6 2 5

3 6 9 6 10

i = 4



(sa+1) - i = a[i]

if a[i]+i = 9

1 2 3 4 5 6 7 8 
2 4 6 2 5 0 0 0

i = 3



(sa+1) - i = a[i]

if a[i]+i = 6

1 2 3 4 5
5 4 4 5 1

i = 5

4 zeros



(sa+1) - i = a[i]

if a[i]+i = 10

1 2 3 4 5 6 7 8 9
5 4 4 5 1 0 0 0 0












*/