#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if(nums.empty() || nums.size() == 1) return nums;

        vector<int> prefix_sum;
        prefix_sum.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++){
            prefix_sum.push_back(nums[i] + prefix_sum[i-1]);
        }

        return prefix_sum;
    }
};