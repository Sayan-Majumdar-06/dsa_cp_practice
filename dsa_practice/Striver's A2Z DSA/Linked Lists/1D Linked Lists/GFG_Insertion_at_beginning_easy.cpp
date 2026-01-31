// GeeksforGeeks problem : LinkedList insertion at beginning
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/linked-list-insertion-at-beginning/1
// Approach : Simple node traversal

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        Node *temp = new Node(x);
        temp -> next = head;
        
        head = temp;
        
        return head;
    }
};