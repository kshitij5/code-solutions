#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'
#define MAX 300005

vector<int> adj[MAX], subval, val;
vector<pii> temp;

bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b){
       return a.second>b.second;
}

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        for(int i=0; i<MAX; i++)adj[i].clear();
        // memset(c, 0, sizeof(c));
        
        int n, x;
        cin >> n >> x;

        int positionsCost[n+1] = {0};
        positionsCost[1] = x;

        for(int i = 1; i < n; i++){
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
        }

        vector<pair<int, int>> temp(0);
        int count = 0;

        for(int i = 1; i <= n; i++){
            int parentCost = positionsCost[i];

            for(auto v: adj[i]){
                temp.push_back(make_pair(v, adj[v].size()));
            }

            sort(temp.begin(), temp.end(), sortbysecdesc);

            for(int j = 0; j < temp.size(); j++){
                positionsCost[temp[j].first] = (j+1) * parentCost;
                cout << j << ":" << positionsCost[j] << " | ";
            }
            temp.clear();
        }

        for(int j = 1; j <= n; j++){
            // cout << j << ":" << positionsCost[j] << " | ";
            count += positionsCost[j] % mod;
        }
        cout << count << endl;
    }
    return 0;
}