#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    IOS;

    int n, p;
    cin >> n >> p;

    int front = p / 2;


    int back;
    if (n % 2 == 0) {
        back = (n - p + 1) / 2;
    } else {
        back = (n - p) / 2;
    }

    int ans = min(front, back);

    if(n==p || n%2==1 && p==n-1 ){
        ans = 0;
    }
    cout<< ans;
    return 0;
}