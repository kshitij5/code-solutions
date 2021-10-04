#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // ITERATIVE SOLUTION
    // TC - O(n) SC - O(1)
    bool canJump(vector<int>& nums) {
        int max_reachable = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (max_reachable < i)
                return false;

            max_reachable = max(max_reachable, nums[i] + i);
        }
        return true;
    }
};