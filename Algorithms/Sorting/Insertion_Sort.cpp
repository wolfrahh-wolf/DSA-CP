#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Insertion Sort Function
    void insertionSort(vector<int>& arr) {
        
        int size = arr.size();
        
        // Traversal
        for(int i = 1; i<size; i++){
            int key = arr[i];
            int j = i-1;
            
            // Swapping it backward until it is in correct position
            while(j>0 && arr[j-1] > key){
                arr[j+1] = arr[j];
                j--;
            }

            arr[j-1] = key;
        }
    } 
};

// Time Complexity: O(N^2)
// Space Complexity: O(1)

int main() {
    // Main Function placeholder for testing
    return 0;
}