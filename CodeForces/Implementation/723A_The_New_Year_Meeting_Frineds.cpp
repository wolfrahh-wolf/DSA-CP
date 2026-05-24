#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int arr[] = {a, b, c};

    sort(arr, arr + 3);

    cout << arr[2] - arr[0];

    return 0;
}

// Technique:
// Sorting

// Approach:
// Sort the three positions.
// Minimum moves = max position - min position.

// TC: O(1)
// SC: O(1)

// Verdict: Optimal