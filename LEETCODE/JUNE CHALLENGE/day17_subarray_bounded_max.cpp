#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {

        int count = 0;
        
        int arrSize = nums.size();

        for (int startPoint = 0; startPoint <arrSize ; startPoint++) {
            int maxElem = INT_MIN;
            for (int grps = startPoint; grps <arrSize ; grps++) {
                maxElem = max(maxElem, nums[grps]);
                if(maxElem > right) break;
                else if(maxElem< left) continue;
                else count++;
            }
        }

        return count;
    }
};