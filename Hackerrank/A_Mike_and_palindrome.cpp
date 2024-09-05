#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void solve() {
    
    string real; 
    cin >> real; 
    int counter =0;
    for(int i=0,j=real.length()-1;i<=j;i++,j--){
			if(real[i]!=real[j])
				counter++;
	}
    if (counter == 1){
        cout << "YES";
    }
    else if(real.length()%2 && !counter)
			cout<<"YES"<<endl;
    else{
        cout << "NO";
    }

}

int main() {
    IOS;

    solve();

    return 0;
}