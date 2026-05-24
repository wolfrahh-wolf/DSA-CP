#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int> &nums) {
        
        int n = nums.size();
        
        int maxFreq = 0, minFreq = n; 
        
        unordered_map<int, int> mpp;
        
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
    
        for(auto it : mpp) {
            int freq = it.second;
            
            maxFreq = max(maxFreq, freq);
            minFreq = min(minFreq, freq);
            
        }
        
        return maxFreq + minFreq;
    }
};

// Technique:a
// Hashing (Frequency Counting)

// Approach:
// Use a hash map to count frequency of each element.
// Traverse the frequency map to find the maximum
// and minimum frequencies.
// Return the sum of both frequencies.

// TC: O(N)
// N => Number of elements
// Hash map insertion and traversal

// SC: O(N)
// N => Hash map storage in worst case

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}