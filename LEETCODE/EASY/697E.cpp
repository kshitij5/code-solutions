#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, vector<int> > degrees;
        int maxLength = 0;

        for (int i = 0; i < nums.size(); i++) {
            degrees[nums[i]].push_back(i);
            int size = degrees[nums[i]].size();
            maxLength = max(maxLength, size);
        }

        for(auto i : degrees) {
            if(i.second.size() == maxLength) {
                vector<int> v = i.second;
                sort(v.begin(), v.end());

                maxLength = min(maxLength, v[v.size()-1] - v[0] + 1);
            }
        }
        return maxLength;
    }
};