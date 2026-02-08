// Leetcode Problem : Delete the middle node of the linked list
// Difficulty : Medium
// Link : https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

// Approach: slow and fast pointers

#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head -> next == nullptr) {
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = (head -> next) -> next;

        while(fast != nullptr && fast -> next != nullptr) {
            slow = slow -> next;
            fast = (fast -> next) -> next;
        }

        ListNode* delNode = slow -> next;
        slow -> next = (slow -> next) -> next;
        delete(delNode);
        return head;
    }
};