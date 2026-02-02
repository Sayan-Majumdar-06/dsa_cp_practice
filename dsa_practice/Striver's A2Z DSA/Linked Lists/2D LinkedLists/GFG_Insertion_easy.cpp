// GeeksforGeeks problem : Insertion in Doubly LinkedList
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1
// Approach : Simple node traversal

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        Node* temp = new Node(x);
        
        Node* mover = head;
        int pos = 0;
        
        while(pos < p) {
            pos++;
            mover = mover -> next;
        }
        
        temp -> next = mover -> next;
        temp -> prev = mover;
        if(mover -> next) (mover -> next) -> prev = temp;
        mover -> next = temp;
        
        return head;
    }
};