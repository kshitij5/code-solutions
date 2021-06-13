#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;

        int ruleIndex = 0;
        if(ruleKey == "type") {
            ruleIndex = 0;
        }else if(ruleKey == "color") {
            ruleIndex = 1;
        }else if(ruleKey == "name") {
            ruleIndex = 2;
        }

        for(int i = 0; i < items.size(); i++) {
            if(items[i][ruleIndex] == ruleValue)    count++;
        }

        return count;
    }
};