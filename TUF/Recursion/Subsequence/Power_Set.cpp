#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void func(int ind, int n, vector<int> &nums, vector<int> &arr, vector<vector<int>> &ans) {
        if(ind == n){
            ans.push_back(arr);
            return;
        }

        func(ind + 1, n, nums, arr, ans);

        arr.push_back(nums[ind]);
        func(ind + 1, n, nums, arr, ans);

        arr.pop_back();
    }

public:	
    vector<vector<int> > powerSet(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        func(0, nums.size(), nums, arr, ans);
        return ans;
    }
};

// Technique:
// Recursion (Pick / Not Pick)

// Approach:
// Use recursion to generate all subsets (power set).
// At each index, either skip the current element
// or include it in the current subset.
// When the index reaches the end, store the formed subset.
// This explores all possible combinations using pick/not-pick.

// TC: O(2^N)
// 2^N => Total subsets generated
// SC: O(N)
// N => Recursive Stack + Current Subset Storage

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}