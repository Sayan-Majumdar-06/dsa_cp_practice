// GeeksforGeeks Problem : Find pairs with given sum in doubly linked list
// Difficulty : Easy
// Link : https://www.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1

// Approach : 2 pointers

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // Brute force : O(N^2)
        // Node* mover = head;
        
        // vector<pair<int, int>> ans;
        
        // while(mover != nullptr) {
        //     int val = mover -> data;
        //     int rem = target - val;
            
        //     Node* temp = mover -> next;
            
        //     while(temp != nullptr) {
        //         if(temp -> data == rem) {
        //             ans.push_back({ val, rem });
        //             break;
        //         }
                
        //         temp = temp -> next;
        //     }
            
        //     mover = mover -> next;
        // }
        
        // return ans;
        
        
        // O(N)
        Node* mover1 = head;
        Node* mover2 = head;
        
        vector<pair<int, int>> ans;
        
        while(mover2 -> next != nullptr) {
            mover2 = mover2 -> next;
        }
        
        while(mover1 != nullptr && mover2 != nullptr && mover1 != mover2 && mover2 -> next != mover1) {
            if(mover1 -> data + mover2 -> data == target) {
                ans.push_back({mover1 -> data, mover2 -> data});
                mover1 = mover1 -> next;
                mover2 = mover2 -> prev;
            }
            
            else if(mover1 -> data + mover2 -> data < target) {
                mover1 = mover1 -> next;
            }
            
            else {
                mover2 = mover2 -> prev;
            }
        }
        
        return ans;
    }
};