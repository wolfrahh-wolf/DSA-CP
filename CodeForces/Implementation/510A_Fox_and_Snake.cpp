#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols;
    cin >> rows >> cols;

    bool printHash;
    int colHash;

    for(int row = 1; row <= rows; row++){
        printHash = row % 2;

        if (!printHash)
            colHash = ((row / 2) % 2) ? cols : 1;

        for(int col = 1; col <= cols; col++){
            if(printHash) cout << '#';
            else if(colHash == col) cout << '#';
            else cout << '.';
        }
        cout << endl;
    }

    return 0;
}

// Technique:
// Pattern Printing / Simulation

// Approach:
// Traverse each row.
// Print full '#' for odd rows.
// For even rows, place '#' alternately at last and first column.

// TC: O(N × M)
// N => number of rows
// M => number of columns

// SC: O(1)

// Verdict: Optimal