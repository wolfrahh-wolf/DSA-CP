#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0;
    string s;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        if(s.find("++") != string::npos) ans++;
        else ans--;
    }
    
    cout << ans << endl;

    return 0;
}

// Technique:
// Simulation

// Approach:
// Traverse all statements.
// Increment answer for "++", otherwise decrement.

// TC: O(N)
// N => number of statements

// SC: O(1)

// Verdict: Optimal