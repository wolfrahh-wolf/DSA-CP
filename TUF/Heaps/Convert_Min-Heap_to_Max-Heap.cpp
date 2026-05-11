#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void heapifyDown(vector<int> &nums, int index){
            int largest = index;
            int left  = index*2 + 1;
            int right = index*2 + 2;

            if(left < nums.size() && nums[left] > nums[largest]){
                largest = left;
            }
            if(right < nums.size() && nums[right] > nums[largest]){
                largest = right;
            } 

            if(largest != index){
                swap(nums[largest], nums[index]);
                heapifyDown(nums, largest);
            }

            return;
        }

public:
    vector<int> minToMaxHeap(vector<int> nums) {
        int n = nums.size();

        for(int i = n/2 - 1; i >= 0; i--){
            heapifyDown(nums, i);
        }


        return nums;
    }
};

// Technique:
// Heap Conversion (Min Heap to Max Heap)

// Analogy:
// Convert given Array into Max-Heap
// Similar to covert array into Min-Heap

// Approach:
// Convert the given heap into a max-heap using bottom-up heapification.
// Start from the last non-leaf node and perform heapify-down
// on every node up to the root.
// This ensures each subtree satisfies the max-heap property,
// resulting in a valid max-heap.

// TC: O(N)
// SC: O(log N)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}