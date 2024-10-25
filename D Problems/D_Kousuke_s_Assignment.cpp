#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int presum = 0, counter = 0;
    
    set<int> flag; 
    flag.insert(0); 

    for (int i = 0; i < n; i++) {
        presum += arr[i];

        if (flag.count(presum)) {
            counter++;
            flag.clear();  
            flag.insert(0); 
            presum = 0;  
        } 
        else {
            flag.insert(presum);
        }
    }

    cout << counter newline;
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



#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    

}

int32_t main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        
    }

    return 0;
}