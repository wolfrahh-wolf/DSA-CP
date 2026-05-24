#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int no; cin >> no;
        if(no){
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;

    return 0;
}

// Technique:
// Simulation

// Approach:
// Traverse all responses.
// If any person marks hard (1), print "HARD" immediately.
// Otherwise, print "EASY".

// TC: O(N)
// N => No of responses

// SC: O(1)

// Verdict: Optimal