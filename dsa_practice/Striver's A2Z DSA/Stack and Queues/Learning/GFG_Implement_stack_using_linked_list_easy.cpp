// GeeksforGeeks problem : Implement stack using linked list
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/implement-stack-using-linked-list/1
// Approach : LIFO

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class myStack {
    Node* top = nullptr;
    int n = 0;
    
  public:
    myStack() {
        // Initialize your data members
        
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node* newNode = new Node(x);
        newNode -> next = top;
        top = newNode;
        n++;
    }

    void pop() {
        // Removes the top element of the stack
        if(isEmpty()) return;
        
        Node* popped = top;
        top = top -> next;
        n--;
        
        delete popped;
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(top == nullptr) return -1;
        
        return top->data;
    }

    int size() {
        // Returns the current size of the stack.
        return n;
    }
};