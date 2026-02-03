// Leetcode Problem : Middle of the Linked List
// Difficulty : Easy
// Link : https://leetcode.com/problems/middle-of-the-linked-list/

// Approach 1 : Node traversal

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
    ListNode* middleNode(ListNode* head) {
        ListNode* mover = head;
        int n = 0;

        while(mover != nullptr) {
            n++;
            mover = mover -> next;
        }

        int mid = floor(n / 2) + 1;

        mover = head;
        int temp = 0;

        while(temp < mid-1) {
            temp++;
            mover = mover -> next;
        }

        return mover;
    }
};

// Approach 2 : Tortoise-Hare algorithm

class Solution2 {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr) {
            if(fast -> next == nullptr) break;
            slow = slow -> next;
            fast = (fast -> next) -> next;
        }

        return slow;
    }
};