#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<int> map(n + 1);
    
    for(int i = 1; i <= n; i++){
        int key; cin >> key;
        map[key] = i;
    }

    for(int i = 1; i <= n; i++){
        cout << map[i] << ' ';
    }
    
    return 0;
}
// Technique:
// Mapping

// Approach:
// Reverse the gift mapping.
// If friend i gives gift to p[i],
// store i at position p[i].

// TC: O(N)
// N => No of friends

// SC: O(N)

// Verdict: Optimal