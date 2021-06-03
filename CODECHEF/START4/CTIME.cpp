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
        int n, k , f;
        cin >> n >> k >> f;

        vector<pair<int, int>> v;

        for(int i=0; i<n; i++){
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }

        sort(v.begin(), v.end());

    }
    return 0;
}