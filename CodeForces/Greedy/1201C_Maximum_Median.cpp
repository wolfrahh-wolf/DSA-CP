#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int k; cin >> k;

    int med = (n / 2);

    vector<int> nums;

    for(int i = 0; i < n; i++){
        int no; cin >> no;
        nums.push_back(no);
    }

    sort(nums.begin(), nums.end());

    long long ans = nums[med];

    while(k){
        bool change = false;

        for(int i = med; i < n - 1; i++){
            int cnt = i - med + 1;
            long long diff = nums[i + 1] - nums[i];

            if(diff == 0) continue;

        long long cost = diff * cnt;

        if(k >= cost){

            for(int j = med; j <= i; j++){
                nums[j] += diff;
            }

            k -= cost;
            change = true;
        }

        else{
            long long inc = k / cnt;

            for(int j = med; j <= i; j++){
                nums[j] += inc;
            }

            ans = nums[med];
            k = 0;
            break;
        }
    }

        if(!change){
            int cnt = n - med;
            int inc = k / cnt;

            ans = nums[med] + inc;

            break;

        }
    }

    cout << max(ans, (long long)nums[med]) << endl;

    return 0;
}

// Technique:
// Greedy + Sorting

// Approach:
// Sort the array and start from median.
// Greedily raise median and elements to its right
// to match next larger values using k operations.
// Distribute remaining operations equally
// to maximize median.

// TC: O(N log N)
// N log N => Sorting array
// N => Traversing median side

// SC: O(N)

// Verdict: Optimal