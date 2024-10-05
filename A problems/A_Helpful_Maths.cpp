#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;    cin >> s;

    vector<int> numbers;
    for (char c : s) {
        if (isdigit(c)) {
            numbers.push_back(c - '0'); 
        }
    }

    sort(numbers.begin(), numbers.end());
    string result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result += to_string(numbers[i]);
        if (i != numbers.size() - 1) {
            result += '+';
        }
    }

    // Output the sorted string
    cout << result << '\n';

    return 0;
}
