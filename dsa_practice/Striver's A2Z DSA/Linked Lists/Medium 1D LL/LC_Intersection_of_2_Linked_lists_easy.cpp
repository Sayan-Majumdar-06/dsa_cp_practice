// Leetcode Problem : Intersection of 2 Linked Lists
// Difficulty : Easy
// Link : https://leetcode.com/problems/intersection-of-two-linked-lists/

// Approach 1 : Skipping nodes, TC - O(2*m + 2*n), SC - O(1)

#include<iostream>
#include<math.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution1 {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *Amover = headA, *Bmover = headB;

        while(Amover != nullptr && Bmover != nullptr) {
            if(Amover == Bmover) return Amover;
            Amover = Amover -> next;
            Bmover = Bmover -> next;
        }

        int skipnodes = 0;

        if(Amover == nullptr) {
            while(Bmover != nullptr) {
                skipnodes++;
                Bmover = Bmover -> next;
            }

            Bmover = headB, Amover = headA;
            while(skipnodes--) Bmover = Bmover -> next;
            while(Amover != nullptr && Bmover != nullptr) {
                if(Amover == Bmover) return Amover;

                Amover = Amover -> next;
                Bmover = Bmover -> next;
            }

            return nullptr;
        } else {
            while(Amover != nullptr) {
                skipnodes++;
                Amover = Amover -> next;
            }

            Bmover = headB, Amover = headA;
            while(skipnodes--) Amover = Amover -> next;

            while(Amover != nullptr && Bmover != nullptr) {
                if(Amover == Bmover) return Amover;

                Amover = Amover -> next;
                Bmover = Bmover -> next;
            }

            return nullptr;
        }
    }
};

// Approach 2 : 2 pointer traversal, TC - O(m+n), SC - O(1)

class Solution2 {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) return nullptr;

        ListNode *moverA = headA, *moverB = headB;

        while(moverA != moverB) {
            (moverA == nullptr) ? moverA = headB : moverA = moverA -> next;
            (moverB == nullptr) ? moverB = headA : moverB = moverB -> next;
        }

        return moverA;
    }
};