#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void solve() {
    int temp; cin >> temp;
    if(temp >=1900){ cout << "Division 1" << endl;}
    else if (temp >= 1600) {cout << "Division 2" << endl;}
    else if (temp >= 1400) {cout << "Division 3" << endl;}
    else { cout << "Division 4" << endl;}

}

int main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}