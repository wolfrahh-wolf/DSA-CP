#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        vector<int>  police;
        vector<int>  thieves;
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 'P') police.push_back(i);
            else thieves.push_back(i);
        }
        
        int p = 0;
        int t = 0;
        int cnt = 0;
        
        while(p < police.size() && t < thieves.size()){
            if(abs(police[p] - thieves[t]) <= k){
                cnt++;
                p++;
                t++;
            }
            else if(thieves[t] < police[p]) t++;
            else p++;
        }
        
        return cnt;
    }
};

// Technique:
// Greedy
// Two Pointers Algorithm

// Approach:
// Store the indices of Police and Thieves in Two Sperate Array
// Have Two Pointers 'p' & 't' init to 0 to iterate over the respective arrays.
// If the absolute difference between police[p] & thieves[t] is <= k
//      append cnt and move pointers 1 step
// Else if thieves[t] < police[p] ==> the thief is too far from the police so skip him, i.e., t++
// Else append pointer p, so that minimising the gap between them.

// TC: O(N)
// SC: O(N)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}