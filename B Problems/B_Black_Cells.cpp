#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    int n; cin>>n;
    if(n==1){cout<<"1" newline;}
    int length = n-1;

    vector<int> vecarr;
    int first; cin >> first;

    for(int i = 0; i < length; i++){
        int temp; cin >> temp;
        int diff = temp - first;
        vecarr.push_back(diff);
        first = temp;
    }

    // for (auto &x:vecarr){
    //     // cout << x << " old"  newline; 
    // }

    sort(all(vecarr));
    auto it
        = unique(vecarr.begin(), vecarr.end());
    vecarr.erase(it, vecarr.end());


    sort(all(vecarr));
    if(vecarr.size()>1){vecarr.pop_back();}
    reverse(all(vecarr));

    for (auto &x:vecarr){
        cout << x <<  newline; 
        break;
    }
    int i = 0;
    // cout << vecarr[i];
    // cout << vecarr[0] << " ans" newline

    // int sza = vecarr.size(); 
    // cout << "Size" << sza newline;

    // if (sza == 2 || sza == 1) {
    //     cout << vecarr[sza - 1] newline;
    // } else {
    //     cout << vecarr[sza - 2] newline;
    // }
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