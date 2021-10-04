#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size() - 1;
        int m = grid[0].size() - 1;
        int perimeter = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j]) {
                    perimeter += 4;
                    if (grid[i + 1][j]) perimeter -= 2;
                    if (grid[i][j + 1]) perimeter -= 2;
                }
            }
        }

        for (int i = 0; i < m; i++) {
            if (grid[n][i]) {
                perimeter += 4;
                if (grid[n][i + 1]) perimeter -= 2;
            }
        }

        for (int i = 0; i < n; i++) {
            if (grid[i][m]) {
                perimeter += 4;
                if (grid[i + 1][m]) perimeter -= 2;
            }
        }

        perimeter += grid[n][m] * 4;

        return perimeter;
    }
};