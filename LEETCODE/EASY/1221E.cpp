#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int balancedString = 0;
        int maxCount = 0;
        for(int i =0; i<s.length();i++){
            if(s[i]=='R'){
                balancedString++;
            }else{
                balancedString--;
            }
            
            if(balancedString == 0){
                maxCount++;
            }
        }
        return maxCount;
    }
};