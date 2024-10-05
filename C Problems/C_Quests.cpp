#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define v32 vector<int>
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, k; cin >> n >> k;
    
    vector<int> a(n); 
    for (auto &x : a) { cin >> x; }
    vector<int> b(n); 
    for (auto &x : b) { cin >> x; }


    int total = 0, maxb = 0, ans = 0;
    for(int i = 0; i < n && i < k; i++) {
        
        total += a[i];
        maxb = max(maxb, b[i]);
        int test = total + (k - (i + 1)) * maxb;
        ans = max(ans, test);

    }

    cout << ans newline;

    // int points = 0;
    // for (int i = 1; i <= k; i++){
    //     if (i==1){
    //     int index = upper_bound(all(original), points) - original.begin();
    //     points+=original[index];
    //     original[index]=subs[index];
    //     }
    // }


/*
Monocarp is playing a computer game. 
In order to level up his character, he can complete quests. 
    There are n quests in the game, numbered from 1 to n.
Monocarp can complete quests according to the following rules:

the 1-st quest is always available for completion;

the i-th quest is available for completion if all quests j<i have been completed at least once.

Note that Monocarp can complete the same quest multiple times.

For each completion, the character gets some amount of experience points:

for the first completion of the i-th quest, he gets ai experience points;
for each subsequent completion of the i-th quest, he gets bi experience points.

Monocarp is a very busy person, so he has free time to complete no more than k
 quests. Your task is to calculate the maximum possible total experience Monocarp can get if he can 
 complete no more than k quests.

4 7
4 3 1 2
1 1 1 1

*/
}

int32_t main() {
    IOS;

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
