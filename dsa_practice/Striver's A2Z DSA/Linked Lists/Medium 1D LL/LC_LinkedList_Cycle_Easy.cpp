// Leetcode Problem : LinkedList Cycle
// Difficulty : Easy
// Link : https://leetcode.com/problems/linked-list-cycle/

// Approach : Slow and fast pointers (Floyd's Algorithm)

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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast -> next != nullptr) {
            slow = slow -> next;
            fast = (fast -> next) -> next;

            if(slow == fast) return true;
        }

        return false;
    }
};