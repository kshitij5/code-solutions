#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        
        vector<int> rows;
        rows.push_back(1);
        pascal.push_back(rows);

        for(int i = 2; i <= numRows; i++) {
            vector<int> lastrow = rows;
             rows.clear();
             for(int j = 1; j <= i; j++) {
                 if(j == 1 || j == i) {
                     rows.push_back(1);
                 }else{
                     rows.push_back(lastrow[j-1]+lastrow[j]);
                 }
             }
            pascal.push_back(rows);
            lastrow = rows;
            rows.clear();
        }

        return pascal;
    }
};