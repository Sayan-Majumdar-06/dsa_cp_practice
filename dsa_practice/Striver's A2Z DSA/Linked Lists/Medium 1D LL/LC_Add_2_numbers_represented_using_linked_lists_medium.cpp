// GeeksforGeeks Problem : Add 2 numbers represented using linked lists
// Difficulty : Medium
// Link : https://leetcode.com/problems/add-two-numbers/

// Approach : simulation using 2 pointers

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

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* mover1 = l1, *mover2 = l2;
        ListNode* head = nullptr;
        ListNode* prev = nullptr;

        int carry = 0;

        while(mover1 != nullptr && mover2 != nullptr) {
            int temp = ((mover1 -> val) + (mover2 -> val) + carry);
            ListNode* newNode = new ListNode(temp%10);
            if(prev != nullptr) prev -> next = newNode;
            carry = (temp / 10);

            mover1 = mover1 -> next;
            mover2 = mover2 -> next;
            prev = newNode;
            if(head == nullptr) head = prev;
        }

        while(mover1 != nullptr) {
            int temp = ((mover1 -> val) + carry);
            ListNode* nextNode = new ListNode(temp%10);
            prev -> next = nextNode;

            carry = (temp / 10);
            mover1 = mover1 -> next;
            prev = prev -> next;
        }

        while(mover2 != nullptr) {
            int temp = ((mover2 -> val) + carry);
            ListNode* nextNode = new ListNode(temp%10);
            prev -> next = nextNode;

            carry = (temp / 10);
            mover2 = mover2 -> next;
            prev = prev -> next;
        }

        if(carry != 0) {
            ListNode* carryNode = new ListNode(carry);
            prev -> next = carryNode;
        }

        return head;
    }
};