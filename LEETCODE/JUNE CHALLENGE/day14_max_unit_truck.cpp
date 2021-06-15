#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool sortcol( const vector<int>& v1,
                const vector<int>& v2 ) {
        return v1[1] > v2[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int maxCount = 0;
        sort(boxTypes.begin(), boxTypes.end(), sortcol);

        for (int i = 0; i < boxTypes.size(); i++){
            if(truckSize <= 0)  break;
            if(boxTypes[i][0] <= truckSize) {
                maxCount += boxTypes[i][1]*boxTypes[i][0];
                truckSize -= boxTypes[i][0];
            }else {
                maxCount += boxTypes[i][1]*truckSize;
                truckSize = 0;
            }
            cout << boxTypes[i][0] << " " << boxTypes[i][1] << endl;
        }

        return maxCount;
    }
};