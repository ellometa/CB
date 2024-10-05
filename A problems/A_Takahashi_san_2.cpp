#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define v32 vector<int>
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

}

int32_t main() {
    IOS;

    string s; cin >> s;
    int n = s.length();
    if(s[n-1]=='n' && s[n-2]=='a' && s[n-3]=='s'){
        cout << "Yes" newline;
    }
    else{
        cout << "No" newline;
    }

    return 0;
}