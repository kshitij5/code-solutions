#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numMatchingSubseq(string str, vector<string>& words) {
        int count = 0;

        map<char, vector<string>> dict;

        for(int i = 0; i < words.size(); i++) {
            dict[words[i][0]].push_back(words[i]);
        }

        for(char c : str) {
            if(dict.find(c) != dict.end()) {
                vector<string> tmp = dict[c];
                dict.erase(c);

                for(int j = 0; j < tmp.size(); j++) {
                    if(tmp[j].size() == 1) {count++;
                    cout << tmp[j] << " ";}
                    else {
                        string newstr = tmp[j].substr(1);
                        dict[newstr[0]].push_back(newstr);
                    }
                }
            }
        }

        return count;
    }
};