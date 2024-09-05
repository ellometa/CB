#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        int num; cin >> num;
        int ognum = num;

        int length = to_string(num).length();
        int counter = 0, digit;
        while (num>0){

            digit = num%10;
            num/=10;
            if (digit !=0 && ognum % digit == 0 ){
                ++counter;
            }

        }
        cout << counter << endl;
    }

    return 0;
}