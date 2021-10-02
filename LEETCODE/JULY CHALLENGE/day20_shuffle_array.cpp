#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> tempNums;
    int random;
public:
    Solution(vector<int>& nums) {
        tempNums = nums;
        random = 0;
    }

    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return tempNums;
    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> shuffled = tempNums;
        for (int i = shuffled.size() - 1; i >= 0;i--) {
            int j = rand() % (i + 1);
            int t = shuffled[i];
            shuffled[i] = shuffled[j];
            shuffled[j] = t;
        }

        return shuffled;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */