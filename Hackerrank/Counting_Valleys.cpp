#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void solve() {
    

}

int main() {
    IOS;

    int t;
    cin >> t;   char c; 
    int height=0, reset=0, valleycounter=0;
    while (t--) {
        cin >> c;

        if(c=='U'){
            ++height;
        }

        if (c=='D' )
        {
            if(height==0) {
                ++valleycounter;
            }
            --height;
        }
        
    }
    cout << valleycounter;
    return 0;
}