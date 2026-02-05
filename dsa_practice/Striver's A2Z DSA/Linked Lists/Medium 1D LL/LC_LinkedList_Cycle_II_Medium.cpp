// Leetcode Problem : LinkedList Cycle II
// Difficulty : Medium
// Link : https://leetcode.com/problems/linked-list-cycle-ii/

// Approach : Slow and fast pointers (Floyd's Cycle Detection Algorithm)

#include<iostream>
#include<math.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast -> next != nullptr) {
            slow = slow -> next;
            fast = (fast -> next) -> next;

            if(slow == fast) {
                ListNode* mover = head;

                while(mover != slow) {
                    mover = mover -> next;
                    slow = slow -> next;
                }

                return mover;
            }
        }

        return nullptr;
    }
};