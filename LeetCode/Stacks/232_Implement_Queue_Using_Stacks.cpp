#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MyQueue {
    stack<int> st1, st2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }

        st1.push(x);

        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        if(st1.empty()){
            return -1;
        }
        int elem = st1.top();
        st1.pop();

        return elem;

    }
    
    int peek() {
        if(st1.empty()){
            return -1;
        }

        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};

// Technique:
// Simulation (Stack to Implement Queue)

// Approach:
// Use two stacks to simulate queue (FIFO) behavior.
// During push, transfer all elements from st1 to st2,
// insert the new element into st1, then move elements
// back from st2 to st1.
// This ensures the oldest element stays on top of st1,
// allowing pop and peek in O(1).

// TC:
// push  -> O(N)
// pop   -> O(1)
// peek  -> O(1)
// empty -> O(1)
// N => Number of elements in the queue

// SC: O(N)
// N => Storage using two stacks

// Verdict: Optimal

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main()
{
    // Main Function placeholder for testing
    return 0;
}