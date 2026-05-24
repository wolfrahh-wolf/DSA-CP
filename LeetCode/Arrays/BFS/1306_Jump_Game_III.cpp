#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool dfs(vector<int>& arr, int idx, vector<bool>& visited){
        if(idx < 0 || idx >= arr.size() || visited[idx])
            return false;

        if(arr[idx] == 0) return true;

        visited[idx] = true;

        return dfs(arr, idx + arr[idx], visited) ||
               dfs(arr, idx - arr[idx], visited);
    }

public:
    bool canReach(vector<int>& arr, int start){
        vector<bool> visited(arr.size(), 0);
        return dfs(arr, start, visited);
    }
};

// Technique:
// DFS (Depth First Search)

// Approach:
// Start DFS traversal from the given index.
// From each index, recursively jump:
// 1) Forward  -> idx + arr[idx]
// 2) Backward -> idx - arr[idx]
// Use a visited array to avoid revisiting indices
// and prevent infinite recursion.
// If any reachable index contains 0, return true.

// TC: O(N)
// N => Number of indices
// Each index is visited at most once

// SC: O(N)
// N => Visited array + recursive stack

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}