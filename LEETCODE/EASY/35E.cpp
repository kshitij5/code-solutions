#include <bits/stdc++.h>
using namespace std;

//USING BINARY SEARCH
// class Solution {
// public:
//     int binSearch(int left, int right, int target, vector<int>& nums) {
//         if(left<=right) {
//             int mid = (left + (right-left))/2;

//             if(nums[mid] == target)
//                 return mid;
//             if(nums[mid] > target)
//                 return binSearch(left, mid-1, target, nums);
//             return binSearch(mid+1, right, target, nums);
//         }

//         return left;
//     }
//     int searchInsert(vector<int>& nums, int target) {
//         return binSearch(0, nums.size(), target, nums);
//     }
// };

//USING STL
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return ans;
    }
};