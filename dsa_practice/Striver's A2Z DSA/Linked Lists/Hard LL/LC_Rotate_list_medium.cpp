// Leetcode Problem : Rotate List to the right by k places 
// Difficulty : Medium
// Link : https://leetcode.com/problems/rotate-list/
// Approach : traversal and pointer handling

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
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || k == 0) return head;

        ListNode* mover = head;

        int n = 0, cnt = 0;

        while(mover != nullptr) {
            n++;
            mover = mover -> next;
        }

        cnt = k % n;

        if(cnt == 0) return head;

        int temp = n - cnt;
        mover = head;

        while(--temp) {
            mover = mover -> next;
        }

        ListNode* newHead = mover -> next;
        mover -> next = nullptr;

        mover = newHead;
        while(mover -> next != nullptr) {
            mover = mover -> next;
        }

        mover -> next = head;

        return newHead;
    }
};