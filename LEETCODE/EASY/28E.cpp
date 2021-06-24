#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty() ||(haystack.empty() && needle.empty()))
            return 0;
        if(haystack.empty() || needle.size() > haystack.size())
            return -1;
        
        int n = needle.size();
        for(int i=0;i+n<=haystack.size();i++){
            if(haystack.substr(i,n)==needle)
                return i;
        }
        return -1;
    }
};