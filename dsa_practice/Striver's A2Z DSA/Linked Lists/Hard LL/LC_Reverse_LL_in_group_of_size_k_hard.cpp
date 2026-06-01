// Leetcode Problem : Reverse nodes in k-group
// Difficulty : Hard
// Link : https://leetcode.com/problems/reverse-nodes-in-k-group/
// Approach : Reversal and 2 pointers

#include<iostream>
#include<algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
private:
    void reverse(ListNode* head, ListNode* &newHead) {
        ListNode* curr = head, *prev = nullptr;

        while(curr != nullptr) {
            ListNode* temp = curr -> next;

            curr -> next = prev;
            prev = curr;
            curr = temp;
        }

        newHead = prev;
    }

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr || k == 1) return head;
        ListNode* mover1 = head, *newHead = head, *mover2 = mover1, *nextNode = mover2 -> next, *lastNode = nullptr;
        
        while(mover2 != nullptr) {
            mover1 = mover2;
            int temp = k;
            while(mover2 != nullptr && --temp) {
                mover2 = mover2 -> next;
            }

            if(temp > 0) {
                if(lastNode) lastNode -> next = mover1;
                break;
            }

            if(mover2) {
                nextNode = mover2 -> next;
                mover2 -> next = nullptr;

                reverse(mover1, newHead);

                if(lastNode) lastNode -> next = newHead;

                mover2 = nextNode;
                lastNode = mover1;

                if(mover1 == head) head = newHead;
            }
        }
        
        return head;
    }
};