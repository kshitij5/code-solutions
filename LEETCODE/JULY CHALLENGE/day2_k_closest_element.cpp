#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // //BRUTE FORCE APPROACH
    // TC: O(log N)
    // SC: O(N)
    // vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    //     vector<pair<int, int>> distances;
    //     vector<int> result;

    //     // WE STORE DIIFFERENCE AS KEY AND INDEX AS VALUE
    //     for (int i = 0; i < arr.size(); i++) {
    //         distances.push_back({abs(arr[i]-x), arr[i]});
    //     }

    //     // THEN WE SORT THE MAP AS WE NEED LESS DIFFERENCED ELEMENT 
    //     sort(distances.begin(), distances.end());

    //     // NOW WE EXTRACT THE FIRST K ELEMENTS
    //     for(int i = 0; i < distances.size() && k>0; i++) {
    //         result.push_back(distances[i].second);
    //         k--;
    //     }

    //     // SORT IT AGAIN AND RETURN IT
    //     sort(result.begin(), result.end());
    //     return result;
    // }

    // ABOVE SOLUTION WORKSS JUST FINE BUT 
    // 1. WE ARE DOING TOO MUCH OF OPERATIONS UNNECESSARY 
    // 2. WE ARE ABSOLUTELY NOT USING THE FACT THAT arr IS ALREADY SORTED

    // LET US OPTIMIZE THE ABOVE SOLUTION THEN USING A TWO POINTERS APPROACH
    
    // TWO POINTERS APPROACH
    // TC: O(N)
    // SC: O(N)
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int start = 0, end = arr.size()-1;
        vector<int> result;

        // WE ARE SIMPLY DECREASING THE SIZE OF SUB ARRAY 
        // UNITL IT IS EQUAL TO K IN SIZE
        // WE ARE DOING THIS GREEDILY, CONSIDERING ONLY 
        // ONE WHOSE INDEX AS WELL DIFFERENCE IS LESSER THAN OTHER ONE
        while ((end-start) >= k) {
            int startValue = abs(arr[start] - x);
            int endValue = abs(arr[end] - x);

            if(startValue > endValue) {
                start++;
            }else{
                end--;
            }
        }

        for(int i = start; i <= end; i++) {
            result.push_back(arr[i]);
        }
        return result;
    }

    //  ABOVE SOLUTION ALSO WORKS JUST FINE, BUT FOR CASE WHEN ARRAY SIZE 
    // IS VERY LARGE AND K SIZE IS SMALL, WE ARE GOING TO WASTE TOO MUCH OF 
    // TIME ITERATING OVER 
    // SO THE BEST SOLUTION WOULD BE USE BINARY SEARCH TO FIND THE MOST CLOSEST ELEMNT
    // USING BINARY SEARCH AND THEN USING SLIDING WINDOW TO COVER K ELEMENTS REQUIRED 
    // OR MORE EFFICIENTLY WE CAN JUST TRY TO FIND THE LEFT BOUND, KEEPING RIGHT BOUND CONSTANT
    // TIME COMPLEXITY HERE WOULD BE ABOUT O(log N)

    // BINARY SEARCH APPROACH
    // TC: O(log N)
    // SC: O(N)
    // vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    //     int start = 0, end = arr.size()-k;
    //     vector<int> result;

    //     // Binary search against the criteria described
    //     while (start < end) {
    //         int mid = (start + end) / 2;
    //         if (x - arr[mid] > arr[mid + k] - x) {
    //             start = mid + 1;
    //         } else {
    //             end = mid;
    //         }
    //     }

    //     for(int i = start; i < end + k; i++) {
    //         result.push_back(arr[i]);
    //     }
    //     return result;
    // }

    // MORE DETAIL HERE : https://leetcode.com/problems/find-k-closest-elements/solution/
};