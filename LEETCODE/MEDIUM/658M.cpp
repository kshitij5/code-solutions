#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // //BRUTE FORCE APPROACH
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
};