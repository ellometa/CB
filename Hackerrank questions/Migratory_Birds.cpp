#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    IOS;

    int t;
    cin >> t;
    vector<int> birds (5, 0);

    while (t--) {
        int num;
        cin >> num;      
        ++birds[num-1];
    }

    // find the biggest element with the max_element function and find its position with the distance function
    int maximum = distance(birds.begin(), max_element(birds.begin(), birds.end()));

    cout << ++maximum ;
    return 0;
}
