#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<int> raw(n+1 ,0);
    vector<int> asc(n+1 ,0);

    for(int i = 1; i <= n; i++){
        int no; cin >> no;
        raw[i] = asc[i] = no;
    }

    sort(asc.begin(), asc.end());

    vector<long long> prefixRaw(n + 1, 0);
    vector<long long> prefixAsc(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        prefixRaw[i] = prefixRaw[i - 1] + raw[i];
        prefixAsc[i] = prefixAsc[i - 1] + asc[i];
    }

    int m; cin >> m;

    vector<long long> ans;

    for(int i = 1; i <= m; i++){
        int t, l, r;
        cin >> t >> l >> r;

        long long sum = 0;

        if(t == 1) sum = prefixRaw[r] - prefixRaw[l - 1];
        else sum = prefixAsc[r] - prefixAsc[l - 1];

        ans.push_back(sum);
    }

    for(long long sum : ans){
        cout << sum << endl;
    }

    return 0;
}

// Technique:
// Sorting + Prefix Sum

// Approach:
// Store original and sorted stone costs.
// Build prefix sums for both arrays.
// Answer each query using range sum:
// prefix[r] - prefix[l - 1].

// TC: O(N log N + M)
// N log N => Sorting stones
// M => Processing queries

// SC: O(N)
// Raw, sorted and prefix arrays

// Verdict: Optimal