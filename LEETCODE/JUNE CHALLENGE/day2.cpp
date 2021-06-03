#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

//USING RECURSION
//TODO APPLY DP
class Solution {
private:
    bool helper(string s1, string s2, string s3) {
        if(s1.empty() && s2.empty() && s3.empty()) return true;
        if(s3.length()==0) return false;

        return (s3[0] == s1[0] && helper(s1.substr(1), s2, s3.substr(1)))
            || (s3[0] == s2[0] && helper(s1, s2.substr(1), s3.substr(1)));
    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length()+s2.length()!=s3.length()) return false;
        return helper(s1, s2, s3);
    }
};


//USING 2D DP
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.length();
        int m = s2.length();

        if(n+m!=s3.length()) return false;

        bool dp[n+1][m+1];
        memset(dp, false, sizeof(dp));

        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                if(i==0 && j==0){
                    dp[i][j] = true;
                }else if(i==0){
                    dp[i][j] = dp[i][j-1] && (s2[j-1] == s3[i+j-1]);
                }else if(j==0){
                    dp[i][j] = dp[i-1][j] && (s1[i-1] == s3[i+j-1]);
                }else{
                    dp[i][j] = (dp[i-1][j] && (s1[i-1] == s3[i+j-1])) || (dp[i][j-1] && (s2[j-1] == s3[i+j-1]));
                }
            }
        }

        return dp[n][m];
    }
};