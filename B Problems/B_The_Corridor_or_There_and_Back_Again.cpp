#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^

#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {

    int n; cin >> n;
    double minans = INF;
    for (int i = 0; i < n; i++){
        double dist; cin >> dist;
        double time; cin >> time;
        double ans = ceil((time - 2)/2) + dist;

        minans = min(minans, ans);
    }
    cout << minans newline;
    minans = 0;
    return;
}

int32_t main() {
    IOS;

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

/*
2 8
4 3
5 2



In the second test case, the second trap prevents you from achieving k≥6

If k≥6, the second trap will activate at the moment 3+s2=3+3=6
 (the time you enter room 4 plus s2). 

In the case of k≥6, you will return to room 4 at time 7 or later. 

The trap will be active at that time. It can be shown that room k=5
 can be reached without encountering an active trap.
*/