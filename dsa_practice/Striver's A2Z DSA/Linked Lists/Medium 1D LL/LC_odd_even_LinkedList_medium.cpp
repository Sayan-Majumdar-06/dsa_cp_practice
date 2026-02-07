// Leetcode Problem : Odd Even LinkedList
// Difficulty : Medium
// Link : https://leetcode.com/problems/odd-even-linked-list/

// Approach : 2 pointers

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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return head;

        ListNode* odd = head;
        ListNode* even = head -> next;
        ListNode* first_even = even;

        while(even != nullptr && even -> next != nullptr) {
            odd -> next = even -> next;
            odd = odd -> next;

            even -> next = odd -> next;
            even = even -> next;
        }

        odd -> next = first_even;

        return head;
    }
};