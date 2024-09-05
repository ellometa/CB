#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define lil long long int

int main() {
    IOS;

    int row;
    cin >> row;
    lil diagsum1=0, diagsum2 = 0;
    lil temp = 0;
    
    for (int i=1; i <= row; i++)   // one to five // one // two 
    {
        for (int tempcolumn = 1; tempcolumn <=row ; tempcolumn++) // one to five // one and five // two and four
        {
            cin >> temp;
            if(tempcolumn==i){
                diagsum1+=temp;
            }
            if( tempcolumn == (row - i + 1)){
                diagsum2+=temp;
            }
        }
        
    }
    cout << abs(diagsum1-diagsum2);
    return 0;
}

// if you are checking test cases then its i+1 NOT ++i