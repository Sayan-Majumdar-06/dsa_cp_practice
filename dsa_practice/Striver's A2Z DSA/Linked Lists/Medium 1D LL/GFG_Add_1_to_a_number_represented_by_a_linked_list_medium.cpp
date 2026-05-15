// GeeksforGeeks Problem : Add 1 to a number represented by a linked list
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1

// Approach : simulation using 2 pointers

#include<iostream>
#include<math.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};


class Solution {
  public:
    Node* addOne(Node* head) {
        Node* front = head, *back = head;
        
        while(front -> next != nullptr) {
            front = front -> next;
            if(front -> data < 9) back = front; 
        }
        
        if(back -> data < 9) {
            (back -> data)++;
            back = back -> next;
            while(back != nullptr) {
                back -> data = 0;
                back = back -> next;
            }
        }
        else {
            Node* temp = new Node(1);
            temp -> next = head;
            
            head = temp;
            
            while(back != nullptr) {
                back -> data = 0;
                back = back -> next;
            }
        }
        
        return head;
    }
};