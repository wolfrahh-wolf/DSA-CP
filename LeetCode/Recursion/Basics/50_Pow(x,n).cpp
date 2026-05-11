#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;   // to handle INT_MIN
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1.0;
        while (N > 0) {
            if (N & 1)
                result *= x;
            x *= x;
            N >>= 1;
        }
        return result;
    }
};

// Technique:
// Binary Exponentiation (Exponentiation by Squaring)

// Approach:
// Convert negative powers into positive by taking reciprocal of x.
// Repeatedly square the base and halve the exponent.
// If the current exponent bit is odd,
// multiply the result with the current base.
// Use bit manipulation to process exponent efficiently.
// This reduces repeated multiplications significantly.

// TC: O(log N)
// N => Absolute value of exponent
// SC: O(1)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}