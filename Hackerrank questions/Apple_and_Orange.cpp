#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long


int main() {
    IOS;

    int start, end, appletree, orangetree, apples, oranges;

    cin >> start >> end >> appletree >> orangetree >> apples >> oranges;
    int fall, applecounter=0, orangecounter=0;
    while (apples--){
        cin >> fall;
        if ((appletree+fall)>=start && (appletree+fall)<=end){
            ++applecounter;
        }
    }
    while (oranges--){
        cin >> fall;
        if ((orangetree+fall)>=start && (orangetree+fall)<=end){
            ++orangecounter;
        }
    }
    cout << applecounter << endl << orangecounter;

    return 0;
}
