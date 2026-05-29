#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;

        if(2 * l <= r){
            cout << l << " " << 2 * l << endl;
        } 
        else{
            cout << -1 << " " << -1 << endl;
        }
    }

    return 0;
}

// Technique:
// Math / Observation

// Approach:
// Choose x = l and y = 2 * l.
// Since LCM(l, 2l) = 2l,
// valid pair exists only if 2l <= r.

// TC: O(T)
// T => No of TC

// SC: O(1)

// Verdict: Optimal