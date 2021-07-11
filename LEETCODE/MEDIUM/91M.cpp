#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int to_int(string value) {
        int result = (value[0]-'0')*10 + (value[1]-'0');
        return result;
    }
public:
    int numDecodings(string s) {
        if(s=="0") return 0;
        if(s.size()==1) return 1;
        if(s[0]=='0') return 0;

        vector<int> dp(s.size()+1, 0);
        dp[0] = 1;
        for(int i = 1; i < s.size(); i++) {
            int val = to_int(s.substr(i - 1, 2));
            if(val<=26 && s[i+1]!='0') {
                dp[i] = dp[i - 1] + 1;
                continue;
            }

            if(s[i]=='0'){
                dp[i] = 0;
                continue;
            }

            dp[i] = dp[i - 1];
        }

        return dp[s.size()-1];
    }
};