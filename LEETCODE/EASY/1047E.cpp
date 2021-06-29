#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Solution Using STACK
    string removeDuplicates(string s) {
        string result = "";
        stack<char> removeDuplicates;

        for(char c: s) {
            char lastChar = removeDuplicates.top();

            // if string is empty or not equal to last character
            // then just push element simply...
            if(removeDuplicates.empty() || lastChar != c) {
                removeDuplicates.push(c);
                continue;
            }

            // if the current element is equal to the last element of the string 
            // then it's the adjacent one, so delete it.
            if(lastChar == c) {
                removeDuplicates.pop();
            }
        }

        // extracting the leftover characters
        while(!removeDuplicates.empty()) {
            result = removeDuplicates.top() + result;
            removeDuplicates.pop();
        }

        //return the string
        return result;
    }

    // Solution Using String as Stack
    // string removeDuplicates(string s) {
    //     string ans;     //for storing answer
    //     for(char i: s)   //for traversing each element in the string
    //     {
    //         if(ans.empty()) 
    //             ans.push_back(i);  //if string is empty then just push element simply...
    //         else if(i == ans.back()) 
    //             ans.pop_back();    //or if the current element is equal to the last element of the string then it's the adjacent one, so delete it.
    //         else 
    //             ans.push_back(i);  //else just push the element simply
    //     }
    //     return ans;  //return the string
    // }
};