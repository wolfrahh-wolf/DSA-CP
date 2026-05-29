#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;

    vector<char> nums;

    for(char ch : s){
        if(ch != '+') nums.push_back(ch);
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i];

        if(i != nums.size() - 1)
            cout << '+';
    }

    return 0;
}

// Technique:
// Sorting + String Manipulation

// Approach:
// Extract digits from the string,
// sort them in non-decreasing order
// and reconstruct the expression using '+'.

// TC: O(N log N)
// N log N => Sorting & Extracting

// SC: O(N)

// Verdict: Optimal