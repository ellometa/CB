#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long


int main() {
    IOS;

    int t;
    cin >> t;

    while (t--) {

        int r; 
        cin >> r;

        vector<int> v;

        for (int i = 0; i < r; i++){

            string s;    cin >> s;

            char ch ='#';

            size_t found = s.find(ch);
            if (found < s.length()) {
                v.push_back(found + 1); 
            }
            

            
            
        }
        for (int i = v.size()-1; i>=0; i--){
                cout << v[i] << " " ;
        }
        cout << endl;
            
    }
    return 0;
}

    
