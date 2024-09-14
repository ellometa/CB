#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define lil long long int
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {

}

int32_t main() {
    IOS;

    int t;
    cin >> t; int temp = t;

    if (t < 2) {
        cout << 0 newline;
        return 0;
    }

    vector<int> v(t);
    for (int i = 0; i < t; ++i) {
        cin >> v[i]; 
    }

    int mindiff; cin >> mindiff;

    sort(v.begin(), v.end());
    
    int i = 0, j=1;

    int Invalid_pair = 0;

    while (j<t){

        if ((v[j]-v[i]) >= mindiff){
            Invalid_pair++;
            i++;
            j++;
        }
        else{   j++;}

        if(i==j){
            j++;
        }
    }

    cout << Invalid_pair newline;

    return 0;
}