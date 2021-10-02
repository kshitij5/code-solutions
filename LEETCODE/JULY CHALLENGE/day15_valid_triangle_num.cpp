#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if (nums.size() < 3) return 0;
        sort(nums.begin(), nums.end());
        vector<int> smaller_than(2002, 0);
        for (auto n : nums)
            ++smaller_than[n + 1];

        for (int i = 2; i <= 2001; ++i)
            smaller_than[i] += smaller_than[i - 1];

        int count = 0;
        for (int i = 0; i < nums.size() - 2; ++i) {
            for (int j = i + 1; j < nums.size() - 1; ++j) {
                count += max(0, smaller_than[nums[i] + nums[j]] - (j + 1));
            }
        }
        return count;
    }
};