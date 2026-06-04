// GeeksforGeeks problem : Flatteing a linked list
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/flattening-a-linked-list/1
// Approach : Recursion

#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
};

class Solution {
  private:
    Node *merge(Node* list1, Node* list2) {
        Node* dummyNode = new Node(-1);
        Node* res = dummyNode;
        
        while(list1 != nullptr && list2 != nullptr) {
            if(list1 -> data < list2 -> data) {
                res -> bottom = list1;
                res = list1;
                list1 = list1 -> bottom;
                res -> next = nullptr;
            } else {
                res -> bottom = list2;
                res = list2;
                list2 = list2 -> bottom;
                res -> next = nullptr;
            }
        }
        
        if(list1) {
            res -> bottom = list1;
        } else {
            res -> bottom = list2;
        }
        
        return dummyNode -> bottom;
    }
    
    Node *traverse(Node *head) {
        if(head == nullptr || head -> next == nullptr) {
            return head;
        }
        
        Node* mergedHead = traverse(head -> next);
        return merge(head, mergedHead);
    }
  public:
    Node *flatten(Node *root) {
        return traverse(root);
    }
};