#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //USING SIMPLE 1D DP APPROACH
    //idea :
    // 1. Do it in two directions.
    // 2. The first loop makes sure children with a higher rating get more candy than its left neighbor; 
    //      the second loop makes sure children with a higher rating get more candy than its right neighbor.
    
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int candies[n];

        //Each child must have at least one candy.
        fill(candies, candies+n, 1);

        //calculating the number of candies people get when they have greater rating than their right neighbours
        for(int i = 1; i < n; i++) {
            if(ratings[i] > ratings[i-1]) {
                candies[i] += candies[i-1];
            }
        }

        // calculating the number of candies people get when they have greater rating from their left neighbours
        for(int i = n-2; i >= 0; i--) {
            if(ratings[i]> ratings[i+1]) {
                candies[i] = max(candies[i], candies[i+1] + 1);
            }
        }

        int totalCandies = 0;
        for(int i: candies) {
            totalCandies += i;
            // cout << i << " ";
        }
        // cout << endl;

        return totalCandies;
    }
};