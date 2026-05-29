#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int pass = 0;
    int maxPass = INT_MIN;
    int ent, ex;

    for(int i = 0; i < n; i++){
        cin >> ex >> ent;
        pass = pass - ex + ent;
        maxPass = max(maxPass, pass);
    }

    cout << maxPass << endl;

    return 0;
}

// Technique:
// Simulation

// Approach:
// Traverse each tram stop.
// Update current passengers by subtracting exits
// and adding entries.
// Track maximum passengers at any point.

// TC: O(N)
// N => No of tram stops

// SC: O(1)

// Verdict: Optimal