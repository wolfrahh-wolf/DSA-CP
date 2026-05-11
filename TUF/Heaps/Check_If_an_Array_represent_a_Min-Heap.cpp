#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHeap(vector<int>& nums) {
        int size = nums.size();

        for (int i = size/2 - 1; i >= 0; i--){
            int left  = i*2 + 1;
            int right = i*2 + 2;

            if(left  < size && nums[left]  < nums[i]) return false;
            if(right < size && nums[right] < nums[i]) return false;
        }

        return true;
    }
};

// Technique:
// Heap Validation (Array-based Binary Heap Check)

// Approach:
// Treat the array as a binary heap representation.
// Traverse all non-leaf nodes and compare each parent
// with its left and right children.
// If any child is smaller than its parent,
// the min-heap property is violated.
// If all nodes satisfy the condition, the array forms a valid min-heap.

// TC: O(N)
// SC: O(1)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}