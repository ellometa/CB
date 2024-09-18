#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define newline <<'\n'
const int INF = LLONG_MAX >> 1;

void solve() {
    
}

int32_t main() {
    IOS;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

/*
You are given two permutations a and b of length n. 
A permutation is an array of it elements from 1 to it where all elements are distinct. 
For example, an array [2, 1, 3] is a permutation, but [0, 1] and [1, 3, 1] aren't. 
You can (as many times as you want) choose two indices i and j, 
then swap ai with aj and bi with bj simultaneously. 
You hate inversions, so you want to minimize the total number of inversions in both permutations. 
[3, 1, 4, 2, 5] then there are 3 An inversion in a is a of indices (i, j) 
such that i < j and > For example, if = permutation p pair pi pi. 
p inversions in it (the pairs of indices are (1, 2), (1, 4) and (3, 4)). 
Input The first line contains an integer t (1 < t < 20 000) the number of test cases. 
Each test case consists of three lines. 
The first line contains an integer it (1 < n < 2 • 105) 
— the length of the permutations a and b. 
The second line contains it integers al, a2, , a„ (1 < ai < n) permutation a.
The third line contains b in a similar format. 
It is guaranteed that the sum of it over all test cases does not exceed 2 • 105. 
Output For each test case, output two permutations a' and b' (in the same format as in the input) 
the permutations after all operations. 
The total number of inversions in a' and b' should be the minimum 
possible among all pairs of permutations that can be obtained using operations from the statement. 
If there are multiple solutions, print any of them. 




*/