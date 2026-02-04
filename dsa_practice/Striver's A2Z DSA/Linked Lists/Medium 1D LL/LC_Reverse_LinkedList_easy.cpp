// Leetcode Problem : Reverse LinkedList
// Difficulty : Easy
// Link : https://leetcode.com/problems/reverse-linked-list/

// Approach 1: Iterative

#include<iostream>
#include<math.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution1 {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(curr != nullptr) {
            ListNode* temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }

        head = prev;
        return head;
    }
};

// Approach 2: Recursive
class Solution2 {
private:
    void reverseNode(ListNode*& head, ListNode* prev, ListNode* node) {
        if(node == nullptr) {
            head = prev;
            return;
        }
        reverseNode(head, node, node -> next);
        node -> next = prev;
    }
public:
    ListNode* reverseList(ListNode* head) {
        reverseNode(head, nullptr, head);
        return head;
    }
};