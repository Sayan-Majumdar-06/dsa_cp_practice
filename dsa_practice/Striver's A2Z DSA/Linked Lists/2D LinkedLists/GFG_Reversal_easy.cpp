// GeeksforGeeks problem : Reversal in Doubly LinkedList
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
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
        next = NULL;
        prev = NULL;
    }
};

class Solution {
  public:
    Node *reverse(Node *head) {
        Node* mover = head;
        
        while(mover != nullptr) {
            if(mover -> next == nullptr) head = mover;
            Node* temp1 = mover -> prev;
            Node* temp2 = mover -> next;
            
            mover -> next = temp1;
            mover -> prev = temp2;
            
            mover = temp2;
        }
        
        return head;
    }
};