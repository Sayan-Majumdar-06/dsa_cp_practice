// Leetcode problem : Implement stack using queue
// Difficulty : Easy
// Link : https://leetcode.com/problems/implement-stack-using-queues/

#include<iostream>
#include<queue>
using namespace std;

// Approach 1: using 2 queues
class MyStack {
public:
    queue<int> q1, q2;

    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);

        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
    }
    
    int pop() {
        int temp = q1.front();
        q1.pop();
        return temp;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

// Approach 2 : using 1 queue
class MyStack {
public:
    queue<int> q;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);

        for(int i = 0; i < q.size()-1; i++) {
            int temp = q.front();

            q.pop();

            q.push(temp);
        }        
    }
    
    int pop() {
        int temp = q.front();
        q.pop();
        return temp;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */