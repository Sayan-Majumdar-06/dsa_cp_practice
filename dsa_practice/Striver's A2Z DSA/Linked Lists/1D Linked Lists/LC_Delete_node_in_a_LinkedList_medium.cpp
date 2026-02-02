// Leetcode Problem : Delete node in a linked list
// Difficulty : Medium
// Link : https://leetcode.com/problems/delete-node-in-a-linked-list/
// Approach : Node copying

#include<iostream>
#include<algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node -> next;

        node -> val = (node -> next) -> val;
        node -> next = (node -> next) -> next;

        delete(temp);
    }
};