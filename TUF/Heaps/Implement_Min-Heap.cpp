#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
private:
    vector<int> arr;
    int cnt;

    void heapifyUp(vector<int> &arr, int index){
        int parent = (index-1) / 2;

        if(index > 0 && arr[parent] > arr[index]){
            swap(arr[parent], arr[index]);
            heapifyUp(arr, parent);
        }

        return;
    }

    void heapifyDown(vector<int> &arr, int index){
        int smallest = index;
        int left  = index*2 + 1;
        int right = index*2 + 2;

        if(left < arr.size() && arr[left] < arr[smallest]){
            smallest = left;
        }
        if(right < arr.size() && arr[right] < arr[smallest]){
            smallest = right;
        } 

        if(smallest != index){
            swap(arr[smallest], arr[index]);
            heapifyDown(arr, smallest);
        }

        return;
    }

public:

    void initializeHeap(){
        arr.clear();
        cnt = 0;
    }

    void insert(int key){
        arr.push_back(key);
        cnt++;

        heapifyUp(arr, cnt-1);
    }

    void changeKey(int index, int new_val){
        if(arr[index] > new_val){
            arr[index] = new_val;

            heapifyUp(arr, index);
        }
        else{
            arr[index] = new_val;

            heapifyDown(arr, index);
        }
    }

    int extractMin(){
        if(cnt == 0) return -1;

        int mini = arr[0];

        swap(arr[0], arr[cnt - 1]);

        arr.pop_back();
        cnt--;

        if(cnt > 0) heapifyDown(arr, 0);

        return mini;
    }

    bool isEmpty(){
        return cnt == 0;
    }

    int getMin(){
        return (cnt == 0) ? -1 : arr[0];
    }

    int heapSize(){
        return cnt;
    }
};

// Technique:
// Heap Operations (Min Heap Implementation)

// Approach:
// Store heap elements in an array representation of a binary heap.
// Use heapify-up after insertion to maintain min-heap property.
// Use heapify-down after extraction or key updates.
// Support insertion, extraction, key modification,
// minimum retrieval, and heap size queries efficiently.

// TC:
// insert      -> O(log N)
// extractMin  -> O(log N)
// changeKey   -> O(log N)
// getMin      -> O(1)
// isEmpty     -> O(1)
// heapSize    -> O(1)
// N => Number of elements in the heap

// SC: O(N)
// N => Storage for heap elements

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}