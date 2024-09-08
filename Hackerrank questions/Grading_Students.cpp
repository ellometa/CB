#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
int main() {
    IOS;

    int t;
    cin >> t;
    int grade;
    while (t--) {

        cin >> grade;

        if (grade < 38) {
            cout << grade << endl;
        } else {
            int real = ((grade / 5) + 1) * 5;

            if (real - grade < 3) {
                cout << real << endl;
            } else {
                cout << grade << endl;
            }
        }
    }

    return 0;
}