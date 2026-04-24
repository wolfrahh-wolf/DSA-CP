#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, vector<int>> mpp;
        for(int i = 0; i<n; i++){
            mpp[nums[i]].push_back(i);
        }

        vector<long long> ans(n, 0);

        for(auto& [val, positions] : mpp){
            int k = positions.size();

            vector <long long> prefix(k+1, 0);

            for(int i = 0; i<k; i++){
                prefix[i+1] = prefix[i] + positions[i];
            }
            
            for(int i = 0; i<k; i++){
                long long currIdx = positions[i];

                // <=== TRICKY ===>
                long long left = i * currIdx - prefix[i];
                long long right = (prefix[k] - prefix[i+1]) - (k-i-1) * currIdx;

                ans[currIdx] = left + right;         
            }
        }

        return ans;
    }
};

// Technique:
// Prefix Sum + Hashing

// Approach:
// Group indices of equal elements using a hash map.
// For each group, use prefix sums of indices to compute
// distances efficiently.
// For each position, calculate contribution from left side
// and right side separately using prefix sums.
// Store the total distance for each index.

// TC: O(N)
// N => Number of elements
// SC: O(N)
// N => Hash map + prefix arrays

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}