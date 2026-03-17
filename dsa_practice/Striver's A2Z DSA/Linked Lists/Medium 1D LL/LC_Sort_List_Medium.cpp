// Leetcode Problem : Sort List
// Difficulty : Medium
// Link : https://leetcode.com/problems/sort-list/

// Approach : Finding middle node and Merge sort

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
private:
    ListNode* findMiddle(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head -> next;


        while(fast -> next != nullptr && (fast -> next) -> next != nullptr) {
            slow = slow -> next;
            fast = (fast -> next) -> next;
        }

        return slow;
    }

    ListNode* merge(ListNode* leftHead, ListNode* rightHead) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

        while(leftHead != nullptr && rightHead != nullptr) {
            if(leftHead -> val < rightHead -> val) {
                temp -> next = leftHead;
                leftHead = leftHead -> next;
            }

            else {
                temp -> next = rightHead;
                rightHead = rightHead -> next;
            }

            temp = temp -> next;
        }

        if(leftHead != nullptr) {
            temp -> next = leftHead;
        }

        else {
            temp -> next = rightHead;
        }

        return dummyNode -> next;
    }

    ListNode* mergeSort(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) {
            return head;
        }

        ListNode* mid = findMiddle(head);
        ListNode* leftHead = head;
        ListNode* rightHead = mid -> next;

        mid -> next = nullptr;
        leftHead = mergeSort(leftHead);
        rightHead = mergeSort(rightHead);

        return merge(leftHead, rightHead);
    }
public:
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};