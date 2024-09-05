#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define lil long long int

void solve() {
    

}

int main() {
    IOS;

    lil Machines, Workers, ConversionRate, RequiredCandies, CandiesinHand = 0, CashinHand=0;
    cin >> Machines >> Workers >> ConversionRate >> RequiredCandies;
    int counter = 0;
    
    while (CandiesinHand < RequiredCandies){
        //calculate allocation of CandiesinHand to money for 
        CashinHand = CandiesinHand/ConversionRate;
        
        while (CashinHand == 0) {
            // increment candies as if running additional passes
            CandiesinHand += Machines * Workers;
            ++counter;
        }
    }
    cout << counter;
}

/*
i need 60 candies
i start with certain amount of machines and workers conversion rate and requiredcandies
-minimize the number of passes


while requiredcandies < candiesinhand

    i want to be able to trade candies for machines and workers
    make first pass
    candiesinhand can be converted to cashinhand (with accordance to the conversionrate)

    ok suppose
    
    take cashinhand
    find max product where cashinhand can be allocated to workers and machines
    thats the new amount of workers and machines 
    calculate candiesinhand
    and at any point if it satisfies the below condition then excellent
    
    if requiredcandies/candiesinhand > 0.5
    then break after ++counter
*/

