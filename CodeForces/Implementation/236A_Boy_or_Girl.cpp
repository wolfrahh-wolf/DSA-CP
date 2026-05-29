#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;

    vector<bool> hashMap(26, false);

    int cnt = 0;

    int n = s.size();

    while(n--){
        int idx = s[n] - 'a';

        if(!hashMap[idx]){
            cnt++;
            hashMap[idx] = true;
        }
    }

    cout << (cnt & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");

    return 0;
}

// Technique:
// Hashing

// Approach:
// Track distinct characters using hash map.
// Count unique characters and check
// whether the count is odd or even.

// TC: O(N)
// SC: O(1)

// Verdict: Optimal