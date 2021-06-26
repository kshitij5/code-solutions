#include <bits/stdc++.h>
using namespace std;

class Solution {
private:   
    bool dfs(vector<bool>& visited, map<int, vector<int>>& edgeIndices, int src, int target) {
        if(src == target) return true;

        visited[src] = 1;
        for(int next: edgeIndices[src]) {
            if(!visited[next]) {
                if(dfs(visited, edgeIndices, next, target))
                    return true;
            }
        }
        return false;
    }
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        map<int, vector<int>> edgesIndices;
        vector<bool> visited(edges.size()+1, false);
        vector<int> ans;

        for (vector<int> edge : edges) {
            fill(begin(visited), end(visited), false);

            // checking if on adding current edge the graph becomes cyclic
            // if yes, that node is our required ans

            if(dfs(visited, edgesIndices, edge[0], edge[1])){
                ans = edge;
                break;
            }
            edgesIndices[edge[0]].push_back(edge[1]);
            edgesIndices[edge[1]].push_back(edge[0]);
            //creating adjecncy list
        }
        return ans;
    }
};