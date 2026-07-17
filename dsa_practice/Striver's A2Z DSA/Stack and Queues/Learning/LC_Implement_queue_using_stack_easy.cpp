// Leetcode problem : Implement queue using stack
// Difficulty : Easy
// Link : https://leetcode.com/problems/implement-queue-using-stacks/

#include<iostream>
#include<stack>
using namespace std;

// Approach 1: O(n) for push operation
class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int temp = s1.top();
        s1.pop();

        return temp;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

//  Approach 2: O(1) for push operation
class MyQueue {
public:
    stack<int> input, output;

    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int temp = peek();
        output.pop();

        return temp;
    }
    
    int peek() {
        if(output.empty()) {
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }

        return output.top();
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */