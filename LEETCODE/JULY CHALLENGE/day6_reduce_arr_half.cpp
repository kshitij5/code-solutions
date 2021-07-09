#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        unordered_map<int, int> elementCount;
        for(int i: arr) {
            elementCount[i]++;
        }

        vector<int> frequencies;
        for(auto i: elementCount) {
            frequencies.push_back(i.second);
        }

        sort(frequencies.begin(), frequencies.end(), greater<int>());

        int sum = 0, ans = 0;

        while(sum < arr.size()/2) {
            sum += frequencies[ans++];
        }

        return ans;
    }
};