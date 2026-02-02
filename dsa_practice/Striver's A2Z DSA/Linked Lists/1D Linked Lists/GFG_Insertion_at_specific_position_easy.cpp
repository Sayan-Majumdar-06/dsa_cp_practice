// GeeksforGeeks problem : LinkedList insertion at Specific Postion
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/insertion-at-a-given-position-in-a-linked-list/1
// Approach : Simple node traversal

#include<iostream>
using namespace std;


class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        int idx = 1;
        
        Node *temp = new Node(val);
        
        if(head == NULL) {
            head = temp;
        } 
        
        else {
            if(pos == 1) {
                temp -> next = head;
                head = temp;
            } else {
                Node *ptr = head;
            
                while(ptr -> next != NULL && idx < pos-1) {
                    ptr = ptr -> next;
                    idx++;
                }
                
                temp -> next = ptr -> next;
                ptr -> next = temp;
            }

        }
        
        return head;
    }
};