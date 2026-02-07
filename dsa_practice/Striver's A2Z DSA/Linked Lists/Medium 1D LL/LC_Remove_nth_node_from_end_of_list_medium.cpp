// Leetcode Problem : Remove nth node from end of list
// Difficulty : Medium
// Link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// Approach 1: traversal

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* mover = head;
        int cnt = 0;

        while(mover != nullptr) {
            cnt++;
            mover = mover -> next;
        }

        int k = cnt - n;
        
        if(k == 0) {
            ListNode* temp = head -> next;
            head -> next = nullptr;
            head = temp;
            return head;
        }

        cnt = 0;
        mover = head;

        while(mover != nullptr) {
            cnt++;

            if(cnt == k) {
                mover -> next = (mover -> next) -> next;
                break;
            }

            mover = mover -> next;
        }

        return head;
    }
};