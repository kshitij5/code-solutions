#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // BRUTE FORCE 
    // TC - O(n*m)
    // string customSortString(string order, string str) {
    //     if (order.length() == 0) return str;
    //     string answer = "";
    //     vector<int> visited(128, 0);

    //     for (int i = 0; i < order.length(); i++) {
    //         char c = order[i];
    //         visited[c] = 1;
    //         for (int j = 0; j < str.length(); j++) {
    //             char c2 = str[j];
    //             if (c == c2) answer += c;
    //         }
    //     }

    //     for (int i = 0; i < str.length(); i++) {
    //         char c = str[i];
    //         if (!visited[c]) {
    //             answer += c;
    //         }
    //     }

    //     return answer;
    // }

    // EFFECIENT METHOD
    // TC - O(max(n, m))
    string customSortString(string order, string str) {
        if (order.length() == 0) return str;
        string answer = "";
        unordered_map<char, int> visited;

        for (int i = 0; i < str.length(); i++) {
            visited[str[i]]++;
        }

        for (char c : order) {
            int freq = visited[c];

            if (freq > 0) {
                while (freq--) {
                    answer += c;
                }
                visited[c] = 0;
            }
        }

        for (auto it : visited) {
            int freq = it.second;
            if (freq > 0) {
                while (freq--)
                    answer += it.first;
            }
        }
        return answer;
    }
};
