#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long


int main() {
    IOS;

    int t;
    cin >> t;
    int time, x2, y2;
    int x1=0, y1=0;
    string dir;
    while (t--) {
        x1=0; y1=0;
        cin >> time >> x2 >> y2;
        cin >> dir;

        bool possible = false;

        for (int i=0; i<dir.length(); i++ ){
            
            char bearing = dir[i];
            if (bearing == 'U'){
                ++y1;
            }
            else if (bearing == 'D')
            {
                --y1;
            }
            else if (bearing == 'R')
            {
                ++x1;
            }
            else{
                --x1;
            }
            int manhattanDistance = abs(x2 - x1) + abs(y2 - y1);
            if (manhattanDistance <= (i+1) && ((i+1)-manhattanDistance) % 2 == 0 )
            {
                possible = true;
            }
        }
        if (possible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
//https://www.codechef.com/problems/FIGBOT
/*
take testcase

take number of seconds

take coordinates for bob

take the instructed direction(string) of alice one command(char) at a time

see if bob can reach alice in that many number of seconds (which will be equal to command number we are on)

basically manhattan distance

-no? then go to next command for alice

-keep going until we either reach alice in the given seconds or exhaust number of commands

-if latter then give up and say no
*/