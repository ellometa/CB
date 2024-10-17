#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS  ios::sync_with_stdio(false);    cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(), (x).end()
const int INF = LLONG_MAX >> 1;

void solve(){
}

int32_t main(){
    IOS;
    string a, b;    cin >> a >> b;

    for (int i = 0; i < a.length(); i++){
        if (a[i] < 91){
            a[i] += 32;
        }
        if (b[i] < 91){
            b[i] += 32;
        }
    }
    if (a > b){
        cout << 1;
    }
    else if (a == b){
        cout << 0;
    }
    else{
        cout << -1;
    }

    return 0;
}