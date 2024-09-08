#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long


int main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a==0){
            b % 2 == 0 ?cout<< "YES"<<endl:cout<<"NO"<<endl;
        }
        else if (b==0){
            a % 2 == 0 ?cout<< "YES"<<endl:cout<<"NO"<<endl;
        }



        else {
            if ((a % 2 == 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 1)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }

    }

    return 0;
}