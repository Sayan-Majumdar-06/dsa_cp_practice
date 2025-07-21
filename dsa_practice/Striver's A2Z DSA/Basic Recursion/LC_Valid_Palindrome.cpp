// Leetcode problem : Valid Palindrome
// Difficulty : Easy
// Link : https://leetcode.com/problems/valid-palindrome
// Approach 1 : Constructive algorithm

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i < s.length(); i++) {
            if((s[i] < 48 || s[i] > 57) && (s[i] < 65 || s[i] > 90) && (s[i] < 97 || s[i] > 122)) {
                s.erase(s.begin() + i);
                i--;
            }
        }

        for(int i = 0; i < s.length()/2; i++) {
            s[i] = s[i] | ' ';
            s[s.length()-1-i] = s[s.length()-1-i] | ' ';
            if(s[i] != s[s.length()-1-i]) {
                cout << s << endl;
                return false;
            }
        }

        cout << s << endl;
        return true;
    }
};

// Approach 2 : 2-pointers

class Solution {
public:
    bool isPalindrome(string s) {
        int a = 0, b = s.length()-1; 

        while(a < b) {
            if(!isalnum(s[a])) {
                a++;
                continue;
            } if (!isalnum(s[b])) {
                b--;
                continue;
            }

            s[a] = s[a] | ' ';
            s[b] = s[b] | ' ';
            if(s[a] != s[b]) {
                return false;
            }
            a++;
            b--;
        }
        return true;    
    }   
};