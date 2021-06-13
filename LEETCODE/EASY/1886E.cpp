#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.size() == 1){
            return ;
        }
        
        // first we find the transpose of the matrix
        for(int i = 0; i < matrix.size(); i++){
            for(int j = i+1; j < matrix.size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // now we just need to sort the elements row wise
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix.size()/2; j++){
                swap(matrix[i][j], matrix[i][matrix.size()-1-j]);
            }
        }
    }
    bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) {
        int t = 4;
        while(t--) {
            for(int i = 0; i < matrix.size(); i++){
                for(int j = 0; j < matrix.size(); j++){
                    if(matrix[i][j]!=target[i][j]){
                        return false;
                    }
                }
            }
            rotate(matrix);
        }
        return true;
    }
};