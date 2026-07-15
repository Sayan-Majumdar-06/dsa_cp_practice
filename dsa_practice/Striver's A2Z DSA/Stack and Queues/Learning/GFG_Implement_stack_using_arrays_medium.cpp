// GeeksforGeeks problem : Implement stack using array
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/implement-stack-using-array/1
// Approach : LIFO

#include<iostream>
#include<vector>
using namespace std;

class myStack {
  public:
    int top = -1;
    vector<int> a;
    int max_top = -1;
    
    
    myStack(int n) {
        // Define Data Structures
        max_top = n;
    }

    bool isEmpty() {
        // check if the stack is empty
        if(top == -1) return true;
        return false;
    }

    bool isFull() {
        // check if the stack is full
        if(top == max_top-1) return true;
        return false;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(isFull()) return;
        
        a.push_back(x);
        top++;
    }

    void pop() {
        // removes an element from the top of the stack
        if(isEmpty()) return;
        a.pop_back();
        top--;
    }

    int peek() {
        // Returns the top element of the stack
        if(isEmpty()) return -1;
        
        return a[top];
    }
};