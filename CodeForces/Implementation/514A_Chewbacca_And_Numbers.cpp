#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        int digit = s[i] - '0';

        if(digit >= 5) {
            int inverted = 9 - digit;

            // Avoid leading zero
            if(i == 0 && inverted == 0) continue;

            s[i] = inverted + '0';
        }
    }

    cout << s << endl;
    
    return 0;
}
// Technique:
// Greedy

// Approach:
// Traverse each digit.
// Replace digit d with (9 - d) if it produces a smaller value.
// Skip inversion if it creates leading zero at first position.

// TC: O(N)
// N => number of digits

// SC: O(1)

// Verdict: Optimal