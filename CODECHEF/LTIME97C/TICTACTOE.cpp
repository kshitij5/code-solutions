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
        int n, m , k;
        cin >> n >> m >> k;

        int a[n][m];

        for (int i = 0; i < n*m; i++){
            int x,y;
            cin >> x >> y;
            a[x][y] = 1;
        }
    }
    return 0;
}