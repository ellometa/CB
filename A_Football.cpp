#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define vint vector<int>
#define pb push_back
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {

}

int32_t main() {
    IOS;

    string str; cin >> str; int onecounter=0, zerocounter= 0;
    int len = str.length()  ;
    for (int i = 0; i < len; i++){
        if (str[i]== str[i-1]){
            ++zerocounter;
            
        }
        else{
            zerocounter=1;
        }
        if (zerocounter >= 7 ){
        cout << "YES" newline;
        return 0;
        }
            
        
    
    }
    cout << "NO" newline;
}