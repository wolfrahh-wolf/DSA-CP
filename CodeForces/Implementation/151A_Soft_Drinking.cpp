#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinkToasts = (k * l) / nl;
    int limeToasts = c * d;
    int saltToasts = p / np;

    int ans = min({drinkToasts, limeToasts, saltToasts}) / n; // {} => For Overloading with >2 variables

    cout << ans << endl;

    return 0;
}

// Technique:
// Math / Simulation

// Approach:
// Compute maximum possible toasts from:
// 1. Drink quantity
// 2. Lime slices
// 3. Salt quantity
// Final answer is the minimum among them divided equally among friends.

// TC: O(1)
// SC: O(1)

// Verdict: Optimal