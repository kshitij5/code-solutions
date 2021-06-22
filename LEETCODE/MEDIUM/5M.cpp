#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkPalin(string str) {
        int l = 0, r = str.length()-1;
        while (l <= r) {
            if(str[l] == str[r]){
                l++;
                r--;
            }else{
                return false;
            }
        }
        return true;
    }
    
    //USING BRUTE FORCE
    // string longestPalindrome(string s) {
    //     if(s.length() < 1 || s == NULL) return "";

    //     string result = "";
    //     bool wasLastPalindrome = false;

    //     for (int i = 0; i < s.length(); i++) {
    //         for (int j = 0; j <= s.length()-i; j++) {
    //             string tmp = s.substr(i, j);

    //             if(wasLastPalindrome) {
    //                 if(checkPalin(tmp)) {
    //                     if(tmp.size() > result.size()) {
    //                     result = tmp;
    //                     }
    //                 }
    //             }else{
    //                 if(s[i] == s[j]) {
    //                     wasLastPalindrome = true;
    //                     if(tmp.size() > result.size()) {
    //                     result = tmp;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    //     return result;
    // }

    //USING DYNAMMIC PROGRAMMING 
    string longestPalindrome(string s) {
        if(s.length() < 1) return "";

        string ans = "";
        int n =  s.length();
        bool dp[n][n];

        for(int gap = 0; gap < n; gap++) {
            for(int i = 0, j = gap; i < n; i++, j++) {
                // cout << i << " " << j << endl;

                //THREE SPECIAL CASES IS THERE
                //1. when substring has only one character
                //2. when substring has two characters
                //3. when substring has more than one character
                if(gap == 0){
                    dp[i][j] = true;
                }else if(gap == true){
                    if(s[i] == s[j]){
                        dp[i][j] = true;
                    }else{
                        dp[i][j] = false;
                    }
                }else if(dp[i][j] == true) {
                    if(s[i] == s[j]){
                        dp[i][j] = true;
                    }else{
                        dp[i][j] = false;
                    }
                }
                if(dp[i][j] == true) {
                    ans = s.substr(i, j);
                }
            }
        }

        return ans;
    }
};