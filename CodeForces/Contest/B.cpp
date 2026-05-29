#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<bool> possibilty;

    for(int i = 0; i < n; i++){
        int len; cin >> len;
        string s; cin >> s;

        int low = 0;
        int high = len - 1;

        bool poss = true;

        while(low < high){
            int diff = abs(s[low] - s[high]);

            if(diff != 0 && diff != 2){
                poss = false;
                break;
            }

            low++;
            high--;
        }

        possibilty.push_back(poss);
    }

    for(bool poss : possibilty){
        if(poss) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

// Technique:
// Two Pointers / Observation

// Approach:
// Compare mirrored characters.
// A valid pair can become equal only if
// absolute difference is 0 or 2.
// If any pair fails, print "NO".

// TC: O(T × N)
// T => No of test cases
// N => Length of string

// SC: O(1)

// Verdict: Optimal