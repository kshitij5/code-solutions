#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // // USING STACK - INTUITIVE
    // string removeOuterParentheses(string s) {
    //     if(s.size()<=2) return "";
    //     stack<char> removeParenthesis;
    //     string answer = "";

    //     int lastCount = 0;
    //     for(char c: s) {
    //         if(c=='(') {
    //             lastCount++;
    //         }else {
    //             lastCount--;
    //         }

    //         if(lastCount == 0) {
    //             string temp = "";
    //             while(!removeParenthesis.empty()) {
    //                 temp = removeParenthesis.top() + temp;
    //                 removeParenthesis.pop();
    //             }

    //             answer += temp.substr(1);
    //             cout << answer << endl;
    //             continue;
    //         }

    //         removeParenthesis.push(c);
    //     }

    //     return answer;
    // }

    // USING STRING ONLY - SMART
    string removeOuterParentheses(string S) {
        int count = 0;
        string str;
        for (char c : S) {
            if (c == '(') {
                if (count++) {
                    str += '(';
                }
            } else {
                if (--count) {
                    str += ')';
                }
            }
        }
        return str;
    }
};