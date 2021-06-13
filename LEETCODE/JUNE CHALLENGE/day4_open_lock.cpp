#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        if(target == "0000") return 0;

        queue<int> queue;
        queue.push(0);

        bool visited[10000] = {false};

        for(auto& i : deadends){
            visited[stoi(i)] = true;
        }

        int targt = stoi(target);
        if(visited[0] == true) return -1;
        
        for(int i = 0; i < queue.size(); i++){
            int qlen = queue.size();
            
        }

    }
};

///todo