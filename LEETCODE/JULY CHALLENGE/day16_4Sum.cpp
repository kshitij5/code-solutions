class Solution {
    vector<vector<int>> ans;
public:
    void findQuadruplets(vector<int>& nums, int i, int val) {
        int n = nums.size();
        for (int j = i + 1; j < n - 2; ++j) {
            if (j != i + 1 && nums[j] == nums[j - 1]) continue; // this is to avoid processing duplicate element
            int low = j + 1, high = n - 1;
            while (low < high) {
                if (nums[j] + nums[low] + nums[high] < val) low++;
                else if (nums[j] + nums[low] + nums[high] > val) high--;
                else {
                    ans.push_back({ nums[i], nums[j], nums[low], nums[high] });
                    low++;
                    high--;
                    while (low < high && nums[low] == nums[low - 1]) { // keep on incrementing low until you get a different element
                        low++;
                    }
                }
            }
        }
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        if (n < 4) return ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; ++i) {
            if (i != 0 && nums[i] == nums[i - 1])
                continue;
            int val = target - nums[i];
            findQuadruplets(nums, i, val);
        }

        return ans;
    }
};
