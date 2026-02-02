// GeeksforGeeks problem : Length of LinkedList
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
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
    int getCount(Node* head) {
        Node* mover = head;
        int cnt = 0;
        
        while(mover != NULL) {
            cnt++;
            mover = mover -> next;
        }
        
        return cnt;
    }
};