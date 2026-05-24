#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict){
        int n = s.size();

        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        vector<bool> dp(n + 1, false);

        int maxLen = 0;
        for(const string& word : wordDict){
            maxLen = max(maxLen, (int)word.size());
        }

        dp[0] = true;

        for(int i = 1; i <= n; i++){
            for(int j = max(0, i - maxLen); j < i; j++){
                if(dp[j] && dict.find(s.substr(j, i - j)) != dict.end()){
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};

// Technique:
// Dynamic Programming + Hashing

// Approach:
// Use DP to determine whether a prefix of the string
// can be segmented into valid dictionary words.
// Store dictionary words in a hash set for O(1) lookup.
// For each position, check previous valid partitions
// within the maximum word length.
// If a valid substring exists in the dictionary,
// mark the current position as reachable.

// TC: O(N x L^2) + O(L) ~= O(N x L)
// N => Length of the string
// L => Maximum word length in dictionary
// O(N x L)   => DP traversal
// O(N x L^2) => Worst Case of Inner Loop can go L iterations
// O(L)       => Substring creation/check

// SC: O(N + M)
// N => DP array storage
// M => Hash set storage for dictionary

// Verdict: Optimal


int main(){
    // Main Function placeholder for testing
    return 0;
}