#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int> &nums) {
        
        int n = nums.size();
        
        int maxFreq = 0, secMaxFreq = 0;
        int maxEle = -1, secEle = -1;
        
        unordered_map<int, int> mpp;
        
        for (int i = 0; i < n; i++){
            mpp[nums[i]]++;
        }
        
        for(auto it : mpp) {
            int ele = it.first; 
            int freq = it.second; 
            
            if(freq > maxFreq) {
                secMaxFreq = maxFreq;
                maxFreq = freq;
                secEle = maxEle;
                maxEle = ele;
            } 
            else if(freq == maxFreq) {
                maxEle = min(maxEle, ele);
            }
            else if(freq > secMaxFreq) {
                secMaxFreq = freq;
                secEle = ele;
            }
            else if(freq == secMaxFreq) {
                secEle = min(secEle, ele);
            }
        }
        
        return secEle;
    }
};

// Technique:
// Hashing (Frequency Counting)

// Approach:
// Use a hash map to count frequency of each element.
// Traverse the frequency map to track the most frequent
// and second most frequent elements.
// Update frequencies dynamically while handling ties
// by choosing the smaller element.

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