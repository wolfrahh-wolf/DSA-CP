#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];

    int low = INT_MAX;
    int high = INT_MIN;
    int lowIdx, highIdx;
    int lastIdx = n - 1;

    for(int i = 0; i < n; i++){
        cin >> arr[i];

        if(arr[i] <= low){
            low = arr[i];
            lowIdx = i;
        }
        if(arr[i] > high){
            high = arr[i];
            highIdx = i;
        }
    }

    int swaps = (lastIdx - lowIdx) + highIdx;
    
    if(highIdx > lowIdx) swaps--;

    cout << swaps;

    return 0;
}

// Technique:
// Greedy / Simulation

// Approach:
// Find leftmost maximum height and rightmost minimum height.
// Count swaps needed to move maximum to front
// and minimum to end.
// Reduce one swap if movements overlap.

// TC: O(N)
// N => number of soldiers

// SC: O(1)

// Verdict: Optimal