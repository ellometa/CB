#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void solve() {
    

}

int main() {
    IOS;

    int t;
    cin >> t;
    int temp = t;
    float r, j=0, k=0, l=0;
    while (temp--) {
        cin >> r;
        if (r>0) ++j;
        else if(r==0) ++k;
        else if (r<0) ++l;
    }
    float res1, res2, res3;
    res1 = j/t; res2=l/t; res3=k/t;
    cout << res1 << endl << res2 << endl << res3;

    return 0;
}