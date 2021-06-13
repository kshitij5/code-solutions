#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;

        int highest_candy = 0;
        for(int candy : candies) {
            highest_candy = max(highest_candy, candy);
        }

        for(int candy : candies) {
            if(candy+extraCandies >= highest_candy){
                result.push_back(1);
            }else{
                result.push_back(0);
            }
        }

        return result;
    }
};