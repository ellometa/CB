#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    int num; cin >> num;
    vector<int> array(num);
    for(int i=0;i<num;i++){
        cin>>array[i];
    }

    int max_val = *max_element(array.begin(), array.end());
    int min_val = *min_element(array.begin(), array.end());
    int ogdiff = max_val - min_val;

    int preSum[num+1];
    preSum[0]=0;
    for (int i = 0; i < num; i++){
        preSum[i+1] = preSum[i] + array[i];
    }
/* THIS IS THE WRONG THOUGHT PROCESS, im just putting it here because its dumb and funny
- find index of max and min
- k has to be a divisor, so find the divisor (number theory)
- pehle get difference between max and min with divisor being 1
- divide max and min ka index by divisor to find a k/divisor number of sets contain divisor elements
- see whether differece in sum of maxset and sum of minset exceeds previous difference
- keep doing until we exhaust all divisors
- im gonna use 1-base index to avoid headaches
*/
    for (int i = 2; i<=(num)/2;i++){

        if (num%i==0){

            int infmax = -INF;
            int infmin = INF;

            for (int j = i; j<=num ; j+=i){
                int sum = preSum[j]-preSum[j-i];
                infmax = max(infmax, sum);
                infmin = min(infmin, sum);
            }

            ogdiff = max ( ogdiff, abs(infmax - infmin));
        }        
    }
    cout << ogdiff newline;
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