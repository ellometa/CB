#include<bits/stdc++.h>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int tt; cin >> tt;
    while(tt--)
    {
        long long n,k,b,s; cin >> n >> k >> b >> s;

        if(n*(k-1) + b*k < s || b*k > s) cout << -1 << "\n";
        else
        { 
            long long sum = s;       
            if (s > b*k + (n-1)*(k-1)) s -= (b*k + (k-1));
            else s-= b*k;

            cout << sum - s << " "; sum = s;

            for(int i = 0; i < n-1; i++)
            {
                long long temp = min(sum,k-1); sum -= temp;
                cout << temp << " ";
            }

            cout << "\n";
        }
    }

    
}