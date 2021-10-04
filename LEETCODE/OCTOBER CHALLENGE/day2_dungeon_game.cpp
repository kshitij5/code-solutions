#include <bits/stdc++.h>
using namespace std;
// It is a variant of MInimum Cost Path Problem
// Can be done using :
// 1. Binary Search (Not Intuitive) (n*m)
// 2. Bottom-Up Dp 
//Using 2d DP approach
// approach : 

// TC = O(n1*n2)
// SC = O(n1*n2)

class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int n = dungeon.size();
        int m = dungeon[0].size();

        vector<vector<int>>dp(n + 1, vector<int>(m + 1, INT32_MAX));

        dp[n][m] = 1;
        dp[n][m - 1] = 1;
        dp[n - 1][m] = 1;

        for (int i = n - 1;i >= 0;i--) {
            for (int j = m - 1;j >= 0;j--) {
                int minpow = min(dp[i + 1][j], dp[i][j + 1]) - dungeon[i][j];
                if (minpow <= 0) {
                    dp[i][j] = 1;
                }
                else {
                    dp[i][j] = minpow;
                }
            }
        }
        return dp[0][0];
    }
};