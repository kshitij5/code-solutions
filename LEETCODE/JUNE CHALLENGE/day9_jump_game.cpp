#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        if(nums.size() == 0)return 0;

        priority_queue<pair<int, int>> maxx;

        int maxValue = nums[0];
        maxx.push(make_pair(nums[0], 0));

       for(int i = 1; i < nums.size(); i++){

        //    int maxResult = INT_MIN;
        //    for(int j = i-1; j >= 0 && i-j<=k; j--){
        //        maxResult = max(maxResult, dp[j]);
        //    }

            while(i-k >= maxx.top().second){
                maxx.pop();
            }

            maxValue = nums[i] + maxx.top().first;
            maxx.push(make_pair(maxValue, i));
       }
       return maxValue;
    }
}; 