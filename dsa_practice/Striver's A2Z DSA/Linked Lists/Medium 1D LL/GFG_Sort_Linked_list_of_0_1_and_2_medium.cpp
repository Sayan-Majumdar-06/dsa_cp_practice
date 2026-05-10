// GeeksforGeeks Problem : Sort a Linked list of 0s, 1s and 2s
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

// Approach : Traversal and connecting of nodes (TC - O(N), SC - O(1))

#include<iostream>
#include<math.h>
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

class Solution {
  public:
    Node* segregate(Node* head) {
        Node *temp0 = nullptr, *temp1 = nullptr, *temp2 = nullptr, *zhead = nullptr, *ohead = nullptr, *thead = nullptr;
        Node *mover = head;
        
        while(mover != nullptr) {
            if(mover -> data == 0) {
                if(temp0 == nullptr) {
                    temp0 = mover;
                    zhead = temp0;
                }
                else {
                    temp0 -> next = mover;
                    temp0 = temp0 -> next;
                }
            }
            
            else if(mover -> data == 1) {
                if(temp1 == nullptr) {
                    temp1 = mover;
                    ohead = temp1;
                }
                else {
                    temp1 -> next = mover;
                    temp1 = temp1 -> next;
                }
            }
            
            else if(mover -> data == 2) {
                if(temp2 == nullptr) {
                    temp2 = mover;
                    thead = temp2;
                }
                else {
                    temp2 -> next = mover;
                    temp2 = temp2 -> next;
                }
            }
            
            mover = mover -> next;
        }
        
        if(zhead) temp0 -> next = (ohead ? ohead : thead);
        if(ohead) temp1 -> next = thead;
        if(thead) temp2 -> next = nullptr;
        
        if(zhead) return zhead;
        if(ohead) return ohead;
        return thead;
    }
};