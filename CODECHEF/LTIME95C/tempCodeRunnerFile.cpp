#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'
#define MAX 200005

int n, k, a;

map<int, int> m;
vector<int> lca;
vector<int> adj[MAX];

int level[MAX], c[MAX];
int a1[MAX], a2[MAX];

int dfs(int u, int parent){
    level[u] = level[parent] + 1;

    if(m[u]){
        c[u] = u;
    }

    for(auto v: adj[u]){
        if(v == parent) continue;
        int x = dfs(v, u);
        if(x and c[u] == 0){
            c[u] = x;
        }
    }
    return c[u];
}

void blift(int v, int parent){
    if(c[v]){
        lca.push_back(v);
    }

    a1[v] = (2*level[lca[lca.size()-1]] - level[v]);
    a2[v] = c[lca[lca.size()-1]];

    for(auto i: adj[v]){
        if(i!=parent) blift(i, v);
    }

    if(c[v]){
        lca.pop_back();
    }
}

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        cin >> n >> k >> a;

        for(int i = 0; i < k; i++){
            int x;
            cin >> x;
            m[x]++;
        }

        for(int i = 0; i < n-1; i++){
            int x, y;
            cin >> x >> y;

            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        dfs(a, 0);
        blift(a, 0);

        for(int i = 0; i <= n; i++){
            cout << a1[i] - 1<<" ";
        }cout << endl;

        for(int i = 0; i <= n-1; i++){
            cout << a2[i]<<" ";
        }
    }
    return 0;
}