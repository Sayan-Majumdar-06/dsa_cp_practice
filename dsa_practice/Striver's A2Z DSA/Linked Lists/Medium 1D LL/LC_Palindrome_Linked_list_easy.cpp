// Leetcode Problem : Middle of the Linked List
// Difficulty : Easy
// Link : https://leetcode.com/problems/middle-of-the-linked-list/

// Approach 1 : Brute force, using stack

#include<iostream>
#include<stack>
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
    bool isPalindrome(ListNode* head) {
        ListNode* mover = head;
        stack<int> st;

        while(mover != nullptr) {
            st.push(mover -> val);
            mover = mover -> next;
        }

        mover = head;

        while(mover != nullptr) {
            if(mover -> val != st.top()) {
                return false;
            }

            st.pop();
            mover = mover -> next;
        }

        return true;
    }
};

// Approach 2: Optimal: slow and fast pointers, linked list reversal

class Solution2 {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast -> next != nullptr && (fast -> next) -> next != nullptr) {
            slow = slow -> next;
            fast = (fast -> next) -> next;
        }

        ListNode* temp = slow -> next;
        ListNode* prev = nullptr;

        while(temp != nullptr) {
            ListNode* front = temp -> next;
            temp -> next = prev;

            prev = temp;
            temp = front;
        }

        slow = head;

        while(prev != nullptr) {
            if(slow -> val != prev -> val) return false;
            slow = slow -> next;
            prev = prev -> next;
        }

        return true;
    }
};