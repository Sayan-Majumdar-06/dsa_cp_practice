// GeeksforGeeks problem : Implement queue using array
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/implement-queue-using-array/1
// Approach : FIFO

#include<iostream>
#include<vector>
using namespace std;

class myQueue {

  public:
  int q[1000];
  int max_len = -1;
  int front = -1, rear = -1;
  
    myQueue(int n) {
        // Define Data Structures
        max_len = n;
    }

    bool isEmpty() {
        // check if the queue is empty
        if(front == -1 || front > rear) return true;
        return false;
    }

    bool isFull() {
        // check if the queue is full
        if(rear == max_len-1 && front == 0) return true;
        return false;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(isFull()) return;
        
        if(front == -1) front = rear = 0;
        
        else rear++;
        
        q[rear] = x;
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(isEmpty()) return;
        
        front++;
        
        if(front > rear) front = rear = -1;
    }

    int getFront() {
        // Returns the front element of the queue.
        if(isEmpty()) return -1;
        
        return q[front];
    }

    int getRear() {
        // Return the last element of queue
        if(isEmpty()) return -1;
        
        return q[rear];
    }
};