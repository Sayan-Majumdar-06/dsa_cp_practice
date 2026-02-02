// GeeksforGeeks problem : Deletion in Doubly LinkedList
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1
// Approach : Simple node traversal

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        int pos = 1;
        
        Node* mover = head;
        
        while(pos < x) {
            pos++;
            mover = mover -> next;
        }
        
        if(pos == 1) head = head -> next;
        
        if(mover -> prev) (mover -> prev) -> next = mover -> next;
        if(mover -> next) (mover -> next) -> prev = mover -> prev;
        
        mover -> prev = nullptr;
        mover -> next = nullptr;
        
        delete(mover);
        
        return head;
    }
};