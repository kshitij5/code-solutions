#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> map(256, 0);
        vector<int> revmap(256, -1);

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            char k = t[i];

            // if(map[c]!=-1) {
            //     if(map[c]!=k) {
            //         return false;
            //     }
            //     continue;
            // }

            // if(revmap[k]!=-1) {
            //     if(revmap[k]!=c) {
            //         return false;
            //     }
            //     continue;
            // }

            if (map[c] != revmap[k]) {
                return false;
            }

            map[c] = i + 1;
            revmap[k] = i + 1;
        }

        return true;
    }
};