#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i1 = 0;
        int i2 = 0;

        int n1 = nums1.size();
        int n2 = nums2.size();

        while(i1 < n1 && i2 < n2){
            if(nums1[i1] == nums2[i2]) return nums1[i1];
            else if(nums1[i1] < nums2[i2]) i1++;
            else i2++;
        }

        return -1;
    }
};

// Technique:
// Two Pointers

// Approach:
// Use two pointers to traverse both sorted arrays simultaneously.
// If elements are equal, return the common element.
// Move the pointer pointing to the smaller element
// to search for a possible match.
// If no common element exists, return -1.

// TC: O(N1 + N2)
// N1 => Size of nums1
// N2 => Size of nums2

// SC: O(1)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}