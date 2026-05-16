#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s){
        stack<char> st;

        for(char ch : s){

            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty()) return false;

                char top = st.top();
                st.pop();

                if( (ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[') )

                    return false;
            }
        }

        return st.empty();
    }
};

// Technique:
// Stack (Bracket Matching)

// Approach:
// Traverse the string character by character.
// Push opening brackets into the stack.
// For every closing bracket, check whether
// the stack top contains the corresponding opening bracket.
// If mismatch occurs or stack becomes empty,
// the string is invalid.
// After traversal, the stack must be empty
// for the string to be valid.

// TC: O(N)
// SC: O(N)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}