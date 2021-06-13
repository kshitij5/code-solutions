#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] == nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};

//USING MAP FOR LARGE CONSTRIANTS
int numIdenticalPairs(vector<int>& nums) {
        int pairs = 0;
        
        unordered_map<int, int> map;
		
		// count the frequency of the each number
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }
        // since if n is the frequency of number, number of 
		// good pairs is given by n * (n-1) / 2
        for (auto x : map)
        {
            pairs += (x.second) * (x.second - 1) / 2;
        }
        return pairs;
    }