#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //brute force
    // vector<int> countSmaller(vector<int>& nums) {
        
    //     vector<int> counts;
    //     for (int i = 0; i < nums.size(); i++) {
    //         int lessCount = 0;
    //         for (int j = i+1; j < nums.size(); j++) {
    //             if(nums[i]>nums[j]) lessCount++;
    //         }

    //         counts.push_back(lessCount);
    //     }

    //     return counts;
    // }

    //USING Binary Indexed Tree 
    //Explaination here: 
    //https://leetcode.com/problems/count-of-smaller-numbers-after-self/discuss/1298226/Easy-Solution-w-Explanation-or-Segment-Tree-and-Binary-Indexed-Tree-Approach
    int bit[100001];
    int offset=1e4+1;
    int n;
    
    void update(int index){
        for(;index<=100000;index+=index&(-index))
            bit[index]++;
    }
    
    int query(int index){
        int count=0;
        for(;index>0;index-=index&(-index))
            count+=bit[index];
        return count;
    }
    
    vector<int> countSmaller(vector<int>& nums) {
        n=nums.size();
        vector<int> ans(n);
        
        for(int i=n-1;i>=0;i--){
            ans[i]=query(nums[i]+offset-1);
            update(nums[i]+offset);
        }
        
        return ans;
    }
};