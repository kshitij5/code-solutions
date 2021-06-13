// C++ Program to find the Maximum Area of a Piece of Cake 
// After Horizontal and Vertical Cuts

#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
typedef long long int lli;

class Solution {
public:
    //Returns the maximum area of a Piece of Cake 
    //after Horizontal and Vertical Cuts
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {

        //sorting horizontalCuts and verticalCuts array
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());

        //h, and w, value is pushed
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);

        int maxHorizontal = 0;
        int maxVertical = 0;

        //finds maximum difference between two sets of Horizontal cuts
        for (int i = 1; i < hc.size(); i++){
            int diff = horizontalCuts[i] - horizontalCuts[i-1];
            maxHorizontal = max(maxHorizontal, diff);
        }

        //finds maximum difference between two sets of Vertical cuts
        for (int i = 1; i < vc.size(); i++){
            int diff = verticalCuts[i] - verticalCuts[i-1];
            maxVertical = max(maxVertical, diff);
        }

        //returning product of maxHorizontal and maxVertical, mod 1e9 + 7
        return (int)((long)maxHorizontal * maxVertical % mod);
    }
};

// Driver program to test above function
int main(){
    Solution ob;
    vector<int> hc = {2, 5}, vc = {1, 3};
    cout << (ob.maxArea(6, 4, hc, vc));

    return 0;
}