#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;

    int lucky = 0;

    while(n > 0){
        int digit = n % 10;
        if(digit == 4 || digit == 7) lucky++;
        n /= 10;
    }

    if(lucky == 0){
        cout << "NO" << endl;
        return 0;
    }

    while(lucky > 0){
        int digit = lucky % 10;
        if(digit != 4 && digit != 7){
            cout << "NO" << endl;
            return 0;
        }
        lucky /= 10;
    }

    cout << "YES" << endl;

    return 0;
}

// Technique:
// Math / Simulation

// Approach:
// Count lucky digits (4, 7) in the number.
// Check if the count itself contains only lucky digits.
// Print "YES" if valid, otherwise "NO".

// TC: O(log N)
// log N => digit traversal of number and lucky count

// SC: O(1)

// Verdict: Optimal