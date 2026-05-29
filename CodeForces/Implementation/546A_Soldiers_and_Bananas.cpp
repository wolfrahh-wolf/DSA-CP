#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w; cin >> k >> n >> w;

    int mul = (w * (w + 1)) / 2;
    int total = k * mul;

    cout << max(0, total - n);

    return 0;
}

// Technique:
// Math

// Approach:
// Compute total cost using arithmetic sum
// for 1 to w and multiply by k.
// Print extra amount needed after subtracting available money.

// TC: O(1)
// SC: O(1)

// Verdict: Optimal