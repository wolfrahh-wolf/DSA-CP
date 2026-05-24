#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        string s;

        cin >> s;

        if(s == "Tetrahedron")       cnt += 4;
        else if(s == "Cube")         cnt += 6;
        else if(s == "Octahedron")   cnt += 8;
        else if(s == "Dodecahedron") cnt += 12;
        else if(s == "Icosahedron")  cnt += 20;
    }

    cout << cnt << endl;

    return 0;
}

// Technique:
// Mapping / Simulation

// Approach:
// Traverse all polyhedron names.
// Map each name to its corresponding face count
// and accumulate the total faces.

// TC: O(N)
// N => No of Polyhedrons

// SC: O(1)

// Verdict: Optimal