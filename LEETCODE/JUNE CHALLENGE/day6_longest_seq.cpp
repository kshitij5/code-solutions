#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash;

        //initially we make hash of every elemnet
        for(auto& i : nums){
            hash.insert(i);
        }

        int maxLength = 0;
        //this loop is used to count the presence of continous elements
        for(auto& i : nums){
            if(hash.find(i - 1)==hash.end()){
                int tl = 1;

                while(hash.find(tl+i)!=hash.end()){
                    tl++;
                }

                maxLength = max(maxLength, tl);
            }
        }

        return maxLength;
    }
};