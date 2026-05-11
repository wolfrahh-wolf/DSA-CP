#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Min-Heap Algo
class Solution {
private: 
    void heapifyUp(vector<int> &nums, int ind){
        int parent = (ind-1) / 2;

        if(ind > 0 && nums[parent] > nums[ind]){
            swap(nums[parent], nums[ind]);
            heapifyUp(nums, parent);
        }

        return;
    }

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
    void heapify(vector<int> &nums, int ind, int val) {
        if(nums[ind] > val){
            nums[ind] = val;
            heapifyUp(nums, ind);
        }
        else{
            nums[ind] = val;
            heapifyDown(nums, ind);
        }
    }
};

// Technique:
// Heap Operations (Min Heap Adjustment)

// Approach:
// Update the value at the given index in the heap.
// If the new value is smaller than the current value,
// perform heapify-up to restore min-heap property.
// Otherwise, perform heapify-down.
// This ensures the heap remains valid after modification.

// TC:
// heapifyUp   -> O(log N)
// heapifyDown -> O(log N)
// heapify     -> O(log N)

// SC: O(log N)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}

