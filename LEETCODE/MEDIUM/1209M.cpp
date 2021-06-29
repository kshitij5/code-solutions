#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // // BRUTE FORCE SOLUTION BUT GETS TLE
    // string removeDuplicates(string s, int k) {
    //     string result = "";

    //     for(char c: s) {
    //         if(result.empty()) {
    //             result.push_back(c);
    //         }else if(c == result.back()) {
    //             string temp = "";
    //             while(c == result.back()) {
    //                 temp += result.back();
    //                 result.pop_back();
    //             }

    //             if(temp.size() != k-1) {
    //                 result += temp+c;
    //             cout << result << endl;
    //             }
    //         }else{
    //             result.push_back(c);
    //         }
    //     }

    //     return result;
    // }

    // AFTER OPTIMIZATION
    string removeDuplicates(string s, int k) {
        string result = s.substr(0, k-1);

        for(int i = k-1; i < s.size(); i++) {
            char c = s[i];
            result.push_back(c);

            if(result.size() >= k && c == result[result.size() - k]) {
                result = result.substr(0, result.size() - k);
                cout << result << endl;
            }
        }

        return result;
    }
};