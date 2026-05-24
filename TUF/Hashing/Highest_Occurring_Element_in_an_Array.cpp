#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int> &nums) {
        int n = nums.size();

        int maxFreq = 0; 
        int maxEle;
        
        unordered_map<int, int> mpp;
        
        for (int i = 0; i < n; i++){
            mpp[nums[i]]++;
        }
            
        for(auto it : mpp) {
            int ele = it.first; 
            int freq = it.second; 
            
            if(freq > maxFreq) {
                maxFreq = freq;
                maxEle = ele;
            }
            else if(freq == maxFreq) {
                maxEle = min(maxEle, ele);
            }
        }
        
        return maxEle;
    }
};

// Technique:
// Hashing (Frequency Counting)

// Approach:
// Use a hash map to count frequency of each element.
// Traverse the frequency map to find the element
// with maximum frequency.
// If multiple elements have the same frequency,
// return the smaller element.

// TC: O(N)
// SC: O(N)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}