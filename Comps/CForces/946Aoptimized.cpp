#include <iostream>
#include <cmath>

using namespace std;

//extra_cells= ceil(static_cast<double>(total_cells)/7);

int min_screens(int x, int y) {
    int ans=(x+4*y+14)/15;
    ans=max(ans,(y+1)/2);
    return ans;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {

        int x, y;
        cin >> x >> y;
        cout << min_screens(x, y) << endl; 
    }
    
    return 0;
}
