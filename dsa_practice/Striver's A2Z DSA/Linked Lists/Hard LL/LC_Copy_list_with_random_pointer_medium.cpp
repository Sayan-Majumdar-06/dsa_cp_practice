// Leetcode Problem : Copy List with Random Pointer
// Difficulty : Medium
// Link : https://leetcode.com/problems/copy-list-with-random-pointer/

#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

// Approach 1 : using map, TC - O(N), SC - O(N)
class Solution1 {
public:
    Node* copyRandomList(Node* head) {
        Node* mover = head;
        unordered_map<Node*, Node*> hash;

        while(mover != nullptr) {
            Node* temp = new Node(mover->val);
            hash[mover] = temp;

            mover = mover -> next;
        }

        mover = head;

        while(mover != nullptr) {
            hash[mover] -> random = hash[mover->random];
            hash[mover] -> next = hash[mover -> next];

            mover = mover -> next;
        }

        return hash[head];
    }
};

// Approach 2 : pointer manipulation, TC - O(N), SC - O(1)
class Solution2 {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr) return head;

        Node* mover = head, *copyHead = nullptr;

        while(mover != nullptr) {
            Node* temp = new Node(mover->val);
            Node* nextNode = mover -> next;

            mover -> next = temp;
            temp -> next = nextNode;

            mover = temp -> next;
        }

        mover = head;

        while(mover != nullptr) {
            if(mover -> random) (mover -> next) -> random = (mover -> random) -> next;
            else (mover -> next) -> random = nullptr;

            mover = (mover -> next) -> next;
        }

        mover = head;

        while(mover != nullptr) {
            Node* temp = mover -> next;

            if(mover == head) copyHead = temp;
            mover -> next = temp -> next;

            mover = temp -> next;

            if(temp -> next) {
                temp -> next = (temp -> next) -> next;
            }
        }

        return copyHead;
    }
};