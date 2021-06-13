#include <bits/stdc++.h>
using namespace std;

///some tewst case failing
class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n = stations.size();
        if(target == startFuel || startFuel>target) return 0;

        if(!stations.empty() and startFuel<stations[0][0]) return -1;

        priority_queue<int> reserved_fuel;

        if(!stations.empty())
            reserved_fuel.push(stations[0][1]);
        int count = 0;

        for(int i = 1; i < stations.size(); i++) {
            if(startFuel == stations[i][0]) {
                reserved_fuel.push(stations[i][1]);

                startFuel += reserved_fuel.top();
                reserved_fuel.pop();
                count++;

                if(startFuel>=target) return count;
            }else 
            if(startFuel < stations[i][0]) {
                if(reserved_fuel.empty()) return -1;

                while(startFuel < stations[i][0] and !reserved_fuel.empty()){
                    startFuel += reserved_fuel.top();
                    reserved_fuel.pop();
                    count++;
                }

                if(startFuel>=target) return count;
                else if(startFuel < stations[i][0]) return -1;
                reserved_fuel.push(stations[i][1]);
            }else{
                reserved_fuel.push(stations[i][1]);
            }
        }

        if(!reserved_fuel.empty()){
            startFuel += reserved_fuel.top();
            if(startFuel>=target) return count+1;
        }

        return -1;
    }
};


//WORKING
// class Solution {
//    public:
//    int minRefuelStops(int target, int fuel, vector<vector<int>> &st) {
//       int curr = 0;
//       sort(st.begin(), st.end());
//       priority_queue<int> pq;
//       int i = 0;
//       int cnt = 0;
//       curr += fuel;
//       while (curr < target) {
//          cnt++;
//          while (i < st.size() && st[i][0] <= curr) {
//             pq.push(st[i][1]);
//             i++;
//          }
//          if (pq.empty())
//             break;
//          curr += pq.top();
//          pq.pop();
//       }
//       return curr >= target ? cnt : -1;
//    }
// };