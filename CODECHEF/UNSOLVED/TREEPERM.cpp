#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n, s;
        cin >> n >> s;

        vector<int> nodes[n+1];

        for (int i = 0; i < n; i++){
            int u, v;
            cin >> u >> v ;
            nodes[u].push_back(v);
            nodes[v].push_back(u);
        }

        int a[n];
        int b[n];

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        for (int i = 0; i < n; i++){
            cin >> b[i];
        }

        ///end of input

        
    }
    return 0;
}