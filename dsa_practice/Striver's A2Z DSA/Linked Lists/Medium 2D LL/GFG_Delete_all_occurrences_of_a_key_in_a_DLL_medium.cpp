// GeeksforGeeks Problem : Delete all occurrences of a key in a DLL
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list/1

// Approach : simulation using 2 pointers

#include<iostream>
#include<math.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};


class Solution {
  public:

    // Function to delete a specified node from the linked list
    Node* deleteAllOccurOfX(Node* head, int x) {

        Node* mover = head, *previous = nullptr;
        
        while(mover != nullptr) {
            if(mover -> data == x) {
                Node* temp = mover;
                mover = mover -> next;
                temp -> next = nullptr;
                if(mover != nullptr) mover -> prev = previous;
                
                if(previous == nullptr) head = mover;
                else previous -> next = mover;
                delete(temp);
                
            } else {
                previous = mover;
                mover = mover -> next;
            }
        }
        
        return head;
    }
};