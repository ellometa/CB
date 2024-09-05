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
    while (t--) {
        int x, y, z;
        cin >> x >> y >>z;

        int dist1 = abs(x-z), dist2=abs(y-z);

        if(dist1<dist2){cout << "Cat A" << endl;}
        else if (dist2 < dist1){cout << "Cat B" << endl;}
        else{cout << "Mouse C" << endl;}


    }

    return 0;
}