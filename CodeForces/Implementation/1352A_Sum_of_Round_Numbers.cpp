#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> arr;

    for(int i = 0; i < n; i++){
        string num;
        cin >> num;
        arr.push_back(num);
    }

    for(int i = 0; i < n; i++){
       int size = arr[i].size();
        int mul = pow(10, size);
        vector<int> temp;

        for(int j = 0; j < size; j++){
            mul /= 10;
            int digit = arr[i][j] - '0';

            if(digit == 0) continue;
            temp.push_back(digit * mul);
        }

        int add = temp.size();

        cout << add << endl;
        for(int k = 0; k < add; k++){
            cout << temp[k] << ' ';
        }
        cout << endl;

    }

    return 0;
}

// Technique:
// Math / Simulation

// Approach:
// Traverse each digit of the number.
// Extract non-zero place values (digit × positional multiplier)
// and store them as round numbers.

// TC: O(N × M)
// N => No of Test Cases
// M => No of Digits in each No

// SC: O(M)
// temp => stores non-zero round numbers

// Verdict: Optimal