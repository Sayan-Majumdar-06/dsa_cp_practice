// GeeksforGeeks Problem : Find Length of Loop
// Difficulty : Medium
// Link : https://www.geeksforgeeks.org/problems/find-length-of-loop/1

// Approach : Slow and fast pointers (Floyd's Cycle Detection Algorithm)

#include<iostream>
#include<math.h>
using namespace std;

class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;
        
        while(fast != nullptr && fast -> next != nullptr) {
            slow = slow -> next;
            fast = (fast -> next) -> next;
            
            if(slow == fast) {
                int n = 1;
                
                while(slow -> next != fast) {
                    slow = slow -> next;
                    n++;
                }
                
                return n;
            }
        }
        
        return 0;
    }
};