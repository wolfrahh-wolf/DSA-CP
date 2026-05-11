#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void heapifyDown(vector<int> &nums, int ind){
        int smallest = ind;
        int left  = ind*2 + 1;
        int right = ind*2 + 2;

        if(left < nums.size() && nums[left] < nums[smallest]){
            smallest = left;
        }
        if(right < nums.size() && nums[right] < nums[smallest]){
            smallest = right;
        } 

        if(smallest != ind){
            swap(nums[smallest], nums[ind]);
            heapifyDown(nums, smallest);
        }

        return;
    }
public:
    void buildMinHeap(vector<int> &nums) {
        int size = nums.size();

        for(int i = size/2 - 1; i >= 0; i--){
            heapifyDown(nums, i);
        }
    }
};

// Technique:
// Min-Heap Construction (Bottom-Up Heapify)

// Approach:
// Convert the array into a min-heap using bottom-up heapification.
// Start from the last non-leaf node and perform heapify-down
// for every node up to the root.
// This ensures subtree heaps are fixed before their parents,
// resulting in a valid min-heap.

// TC: O(N)
// SC: O(log N)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}