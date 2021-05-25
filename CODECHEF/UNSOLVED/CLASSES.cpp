#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endl '\n'
#define pii pair<int, int>

signed main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);

    lli t;  //no of test cases
    cin >> t;

    while (t--){
        int n, m , s ,k;
        cin >> n >> m >> s >> k;

        vector<int> path(n+1, INT_MAX); //cost of path to building  ith
        path[0] = 0;
        for (int i = 1; i <= m; i++){
            int u =0, v=0;
            cin >> u >> v;

            int cost = path[min(u,v)] + 1;
            if(path[max(u,v)]>cost)
                path[max(u,v)] = cost;
        }

        vector<int> subjects(n+1, 0);
        for (int i = 0; i < s; i++){
            int s = 0;
            cin >> s;
            subjects[s] = 1;
        }
        //end of input

        for(int i = 0; i <= n; i++){
            if(!subjects[i]){
                path[i] = INT_MAX;
            }
        }
        sort(path.begin(), path.end());

        //choose k shortest paths by sorting
        int total_cost = 0;
        for(int i = 0; i <k; i++){
            total_cost += path[i];
        }
        cout << total_cost*2 << endl;
    }

    return 0;
}