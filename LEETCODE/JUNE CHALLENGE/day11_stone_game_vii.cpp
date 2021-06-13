#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[1001][1001];
    int stoneGameVII(vector<int>& stones) {
        memset(dp,-1,sizeof(dp));
        int sum = 0;
        for(int i : stones) {
            sum += i;
        }
        return solve(0, stones.size()-1, stones, sum);
        
    }
    int solve(int left, int right, vector<int>& stones, int sum) {
        if(left == right){
            return 0;
        }

        if(right - left == 1) {
            return max(stones[left], stones[right]);
        }

        if(dp[left][right]!=-1) {
            return dp[left][right];
        }

        int maxxDiff = max(sum - stones[left] - solve(left+1, right, stones, sum - stones[left]),
        sum - stones[right] - solve(left, right-1, stones, sum - stones[right]));

        dp[left][right] = maxxDiff;
        return maxxDiff;
    }
};