#include <bits/stdc++.h>
using namespace std;

//USING BINARY SEARCH TECHNIQUE
class Solution {
private:
    vector<vector<int>> visited;
    void doesPathExist(vector<vector<int>>& grid, int time, int x, int y) {
        if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size())
            return;

        if(!visited[x][y] && grid[x][y]<=time) {
            visited[x][y] = true;

            doesPathExist(grid, time, x, y-1);
            doesPathExist(grid, time, x-1, y);
            doesPathExist(grid, time, x, y+1);
            doesPathExist(grid, time, x+1, y);
        }
    }
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        int l = 0, r = n*n -1;

        while(l < r) {
            int mid = (l+r)/2;
            
            visited = vector<vector<int>>(n, vector<int>(n, 0));
            doesPathExist(grid, mid, 0, 0);

            if(visited[n-1][n-1]) {
                r = mid;
            }else{
                l = mid + 1;
            }
        }

        return l;
    }
};