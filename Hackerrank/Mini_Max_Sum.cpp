#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define lil long long int

void solve() {
    

}

int main() {
    IOS;

    lil t = 5;
    
    lil currentn;
    lil min, max, sum = 0;

    
    cin >> currentn;
    min = max = currentn; 
    sum += currentn; 

    for (int i = 1; i < t; i++) {
        cin >> currentn;
        
        // Update minimum and maximum
        if (currentn < min) {
            min = currentn;
        }
        if (currentn > max) {
            max = currentn;
        }

        // Keep summing
        sum += currentn;
    }
    // cout << sum << " " << max << " " << min << " " ;
    lil minsum = sum-max;
    lil maxsum = sum-min;
    cout << minsum << " " << maxsum;

    return 0;
}