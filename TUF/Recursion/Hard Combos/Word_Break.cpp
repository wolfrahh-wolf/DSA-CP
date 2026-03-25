#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict (wordDict.begin(), wordDict.end());

        int n = s.size();

        vector<bool> dp(n+1, false);
        dp[0] = true; // Empty String is always valid

        int maxLen = 0;
        for (auto &w : wordDict){
            maxLen = max(maxLen, (int)w.size());
        }

        for(int i = 0; i < n; i++){
            if(!dp[i]) continue;                                             

            for(int len = 1; len <= maxLen && i + len <= n; len++){
                if (dict.count(s.substr(i, len))) {
                    dp[i + len] = true;
                }
            }
        }

        return dp[n];
    }
};

// Technique:
// DP (Tabulation)

// Approach:
// Use DP to check if the string can be segmented into valid words.
// dp[i] represents whether substring [0...i-1] can be formed.
// For every valid position i, try all substring lengths up to max word length.
// If the substring exists in the dictionary, mark dp[i + len] as true.

// TC: O(N * maxLen^2)
// SC: O(N)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}