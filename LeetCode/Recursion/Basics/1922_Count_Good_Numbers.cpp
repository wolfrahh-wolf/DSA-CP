#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    long long modPow(long long base, long long exp) {
        long long result = 1;
        long long MOD = 1e9 + 7;

        base %= MOD;

        while (exp > 0) {
            if (exp % 2 == 1)
                result = (result * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }

        return result;
    }

public:
    int countGoodNumbers(long long n) {
        long long MOD = 1e9 + 7;
        long long evenPos = (n + 1) / 2;
        long long oddPos = n / 2;
        long long res = (modPow(5, evenPos) * modPow(4, oddPos)) % MOD;

        return res;
    }
};

// Technique:
// Binary Exponentiation + Modular Arithmetic

// Approach:
// Even indices can contain 5 possible digits,
// and odd indices can contain 4 possible digits.
// Count total even and odd positions separately.
// Use fast modular exponentiation to compute:
// 5^(even positions) and 4^(odd positions).
// Multiply both results under modulo to get
// the total number of good numbers.

// TC: O(log N)
// N => Length of the number
// SC: O(1)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}