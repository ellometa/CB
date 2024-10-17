#include <bits/stdc++.h>
using namespace std;

#define AKY AayushKYadav ^_^
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
#define v32 vector<string>
#define all(x) (x).begin(),(x).end()
const int INF = LLONG_MAX >> 1;

void solve(){
    
}

int32_t main() {
    IOS;
    int n; cin >> n;
    vector <string> words(n);
    vector<string> result;
    for (int i=0;i<n;i++){

        string s; cin >> words[i];

    }
        
    for (int i=0;i<n;i++) {
        
        if (words[i] == "Ctrl+Z") {
            if (!result.empty()) {
                result.pop_back(); 
            }
        } else {
            // cout << words[i];
            result.push_back(words[i]); 
        }
    }

        
    int size = result.size() - 1;
    if (size == -1){
        cout << "Empty" newline;
    }
        
        
    for (int j=0;j<=size;j++) {
        
        
        cout << result[j] << " ";
        
    }
    return 0;
}
