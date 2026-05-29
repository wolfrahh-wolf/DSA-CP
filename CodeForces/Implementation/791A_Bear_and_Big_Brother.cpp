#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int ans = 0;

    while(a <= b){
        a *= 3;
        b *= 2;
        ans++;
    }

    cout << ans << endl;

    return 0;
}

// Technique:
// Simulation

// Approach:
// Simulate yearly growth.
// Multiply Limak by 3 and Bob by 2
// until Limak becomes strictly larger.

// TC: O(N)
// SC: O(1)

// Verdict: Optimal