#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {

}

int32_t main() {
    IOS;

    int t;    cin >> t;
    int n;    cin >> n;
    string s; cin >> s;

    
    while(n--){
        for (int i = 0; i < s.size()-1; ++i)
        {
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    std::cout<<s;
    return 0;
}