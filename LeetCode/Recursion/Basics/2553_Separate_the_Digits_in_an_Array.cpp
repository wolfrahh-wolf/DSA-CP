#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void extractDigit(vector<int>& ans, int num){
        if(num == 0) return;

        extractDigit(ans, num/10);

        ans.push_back(num%10);
    }

public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        int n = nums.size();

        for(int i = 0; i < n; i++){
            extractDigit(ans, nums[i]);
        }

        return ans;
    }
};

// Technique:
// Recursion (Digit Extraction)

// Approach:
// Recursively divide the number by 10 to reach the most significant digit.
// During backtracking, extract digits using modulo operation
// and store them in order.
// Process every number in the array and append
// all extracted digits into the final result vector.

// TC: O(D)
// D => Total number of digits across all numbers
// SC: O(D)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}