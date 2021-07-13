#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // USING ITERATIVE METHODS
    int findPeakElement(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1])
                return i;
        }
        return nums.size() - 1;
    }

    // USING BINARY SEARCH
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] < nums[mid + 1]) {
                left = mid + 1;
            }
            else {
                right = mid;
            }
        }
        return left;
    }
};