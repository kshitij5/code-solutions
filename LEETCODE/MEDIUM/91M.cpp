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
        dp[1] = s[0]!= '0' ? 1 : 0;
        for(int i = 2; i <= s.size(); i++) {
            int first = to_int(s.substr(i-1, 1));
            int second = to_int(s.substr(i-2, 2));

            if (first >= 1 && first <= 9) {
                dp[i] += dp[i - 1];
            }
            if (second >= 10 && second <= 26) {
                dp[i] += dp[i - 2];
            }
        }

        return dp[s.size()];
    }
};