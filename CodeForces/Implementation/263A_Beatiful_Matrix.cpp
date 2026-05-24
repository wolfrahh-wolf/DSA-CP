#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int row;
    int col;
    int ans;

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> n;
            if(n == 1){
                row = i;
                col = j;
            }
        }
    }

    ans = abs(row - 3) + abs(col - 3);

    cout << ans << endl;

    return 0;
}

// Technique:
// Simulation

// Approach:
// Find the position of 1 in the matrix.
// Compute Manhattan distance from center cell (3, 3).

// TC: O(25) => O(1)
// 25 => Traversing 5x5 matrix

// SC: O(1)

// Verdict: Optimal