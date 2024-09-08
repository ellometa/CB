#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    IOS;

    int t, counter = 0;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if((a+b+c) > 1){ ++counter;}
    }
    cout << counter;
    return 0;
}