#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // USING BRUTEFORCE (*PASSED* BUT IS BAD ON MEMORY AND OPTIMIZATION, 
    // AS WELL PRODUCES WRONG ANSWER WITH CERTAIN TESTCASES)
    // NUMS = [0,1,1,1,0] ...K=2
    int maxLengthOne(vector<int>& nums, int k) {
        vector<int> startingIndexOfOnes;
        int maxLength = 0;

        if(nums[0] == 1) startingIndexOfOnes.push_back(0);

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == 1 && nums[i - 1] == 0) {
                startingIndexOfOnes.push_back(i);
            }
        }

        for(int i : startingIndexOfOnes) {
            int flippedCount = k;
            int tempLength = 0;
            for(int j = i; j < nums.size(); j++) {
                if(nums[j] == 1) {
                    tempLength++;
                }else if(flippedCount>0) {
                    tempLength++;
                    flippedCount--;
                }else{
                    break;
                }
            }
            maxLength = max(maxLength, tempLength);
        }
        return maxLength;
    }
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLength = maxLengthOne(nums, k);

        vector<int> reversedNums = nums;
        reverse(reversedNums.begin(), reversedNums.end());
        
        return max(maxLength, maxLengthOne(reversedNums, k));
    }

    // USING SLIDING WINDOW TECHNIQUE/ TWO POINTERS APPROACH
    /*
        Approach:
        1. The question translates to finding the max length of subArray with at most K 0s.
        2. Use sliding window technique.
        3. Keep count of the number of 0s found in the current window.
        4. If the count is > K, then increment l until the count goes to <=K.
        5. At each iteration find the maxLen.
        6. Time complexity: O( N ).
    
    */
    // int longestOnes(vector<int>& A, int K) {
    //     int zeroCount = 0, l = 0;
    //     int maxLen = 0;
    //     for( int r = 0 ; r < A.size() ; ++r) {
    //         if( A[r] == 0 ) 
    //             ++zeroCount;
    //         while( zeroCount > K ) {
    //             if( A[l] == 0 ) {
    //                 --zeroCount;
    //                 ++l;
    //             }
    //         }
    //         maxLen = max( maxLen, r - l + 1 );
    //     }
    //     return maxLen;
    // }
};