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

    int n; cin >> n;
    string s; cin >> s;
    int count=0;
    vector<int> vec(27);

    for (int i = 0; i < n; i++){

        vec[s[i]-'A']++;

        if (vec[s[i]-'A'] == (s[i]-'A' + 1)){
            count ++;
        }
    }
    cout << count newline;

}

int32_t main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

/*
Monocarp is participating in a programming contest, which features 26
 problems, named from 'A' to 'Z'. The problems are sorted by difficulty.

  Moreover, it's known that Monocarp can solve 
  problem 'A' in 1  minute, 
  problem 'B' in 2 minutes, ..., 
  problem 'Z' in 26 minutes.

After the contest, you discovered his contest log — 
a string, consisting of uppercase Latin letters, 
such that the i-th letter 
tells which problem Monocarp was solving during the i-th minute of the contest. 
If Monocarp had spent enough time in total on a problem to solve it, he solved it. 

Note that Monocarp could have been thinking about a problem after solving it.

6
A C B C B C
1 2 3 4 5 6

1 - A at index 1
2 - B at index 5
3 - C at index 6

so just track each alphabet

-take string
-encounter alphabet, store its ascii value but such that a=1, z=26
vector of zero to 27
-counting alphabets to see if we have it stored
-if time spent between previous iteration of that problem exceeds free time then solved


Given Monocarp's contest log, calculate the number of problems he solved during the contest
*/