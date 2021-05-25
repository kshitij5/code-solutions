#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'
#define MAX 300005

vector<int> adj[MAX], subval, val;
vector<pii> temp;

void dfs(int current, int last = -1){
    for(auto v: adj[current]){
        if(v == last)
            continue;
        dfs(v, current);
    }

    temp.clear();
    for(auto v: adj[current]){
        if(v!=last)
            temp.push_back(make_pair(subval[v], v));
    }

    sort(temp.rbegin(), temp.rend());

    int token = 1;
    for(pair<int, int> p: temp){
        val[p.second] = token++;
    }
    for(auto v: adj[current]){
        if(v!=last)
            subval[current] += val[v] * subval[v];
    }

}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n, x;
        cin >> n >> x;

        subval.assign(n, 1);
        val.assign(n, 0);

        for (int i = 0; i < n-1; ++i){
            int u, v;
            cin >> u >> v, --u, --v;
            adj[u].push_back(v);
            adj[v].push_back(u);    ///remove this in case of directed graph
        }

        dfs(0);
        cout << (subval[0] % mod) * (x % mod) << endl;
    }
    return 0;
}