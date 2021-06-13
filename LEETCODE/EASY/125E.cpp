#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string checkPalin;

        for(char c: s) {
            if(isalnum(c))
                checkPalin += tolower(c);
        }

        string reversed = checkPalin;
        reverse(reversed.begin(), reversed.end());

        return reversed == checkPalin;
    }
};