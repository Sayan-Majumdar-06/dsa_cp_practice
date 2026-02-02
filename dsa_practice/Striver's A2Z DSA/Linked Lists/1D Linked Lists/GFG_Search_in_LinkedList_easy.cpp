// GeeksforGeeks problem : Search in LinkedList
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1
// Approach : Simple node traversal

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        Node* mover = head;
        
        while(mover != NULL) {
            if(mover -> data == key) return true;
            mover = mover -> next;
        }
        
        return false;
    }
};
