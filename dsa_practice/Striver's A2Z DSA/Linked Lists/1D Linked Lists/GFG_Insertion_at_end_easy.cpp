// GeeksforGeeks problem : LinkedList insertion at End
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1
// Approach : Simple node traversal

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node *temp = new Node(x);
        
        if(head == NULL) {
            head = temp;
        } else {
            Node *i = head;
        
            while(i -> next != NULL) {
                i = i -> next;
            }
            
            i -> next = temp;
        }
        
        return head;
    }
};