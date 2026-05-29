#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;

    while(k--){
        if(n % 10 != 0) n--;
        else n /= 10;
    }

    cout << n << endl;

    return 0;
}

// Technique:
// Simulation

// Approach:
// Perform k operations.
// Decrement n if last digit is non-zero,
// otherwise remove last digit by division.

// TC: O(K)
// K => No of Operations

// SC: O(1)

// Verdict: Optimal