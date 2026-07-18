// GeeksforGeeks problem : Implement queue using linked list
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/implement-queue-using-linked-list/1
// Approach : FIFO

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
    Node* front = nullptr, *mover = front;
    int n = 0;
    
  public:
    myQueue() {
        // Initialize your data members
    }

    bool isEmpty() {
        // check if the queue is empty
        return (front == nullptr);
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        Node* newNode = new Node(x);
        if(isEmpty()) {
            front = newNode;
            mover = front;
        }
        
        else {
            mover -> next = newNode;
            mover = mover -> next;
        }
        n++;
    }

    void dequeue() {
        // Removes the front element of the queue
        if(isEmpty()) return;
        
        Node* dequeued = front;
        front = front -> next;
        if(front == nullptr) mover = nullptr;
        n--;
        delete dequeued;
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(isEmpty()) return -1;
        return front->data;
    }

    int size() {
        // Returns the current size of the queue.
        return n;
    }
};
