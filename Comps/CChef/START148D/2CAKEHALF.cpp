#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int solve(int a, int b) {

    int bigger=0, c=0;
    
    while (a!=b)
    {
        if (a>b){
            c+=ceil(a/2.0);
            a-=ceil(a/2.0);
        }
        else {
            c+=ceil(b/2.0);
            b-=ceil(b/2.0);
        }
    }
    return c;
}

int main() {
    IOS;

    int t;
    cin >> t;
    int a,b;
    while (t--) {
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }

    return 0;
}
//https://www.codechef.com/problems/CAKEHALF