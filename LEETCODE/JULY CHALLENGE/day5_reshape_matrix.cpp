#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat[0].size()*mat.size() != r*c) return mat;

        vector<int> values;

        for(auto rows : mat) {
            for(int element : rows) {
                values.push_back(element);
            }
        }

        vector<vector<int> > newMatrix;
        int k = 0;

        for(int i = 0; i < r; i++) {
            vector<int> rows;
            for(int j = 0; j < c; j++) {
                rows.push_back(values[k]);
                k++;
            }
            newMatrix.push_back(rows);
        }

        return newMatrix;
    }
};