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
        int n;
        cin >> n;

        map<string, int> total;

        for(int i=0; i < 3*n; i++){
            string code;
            int solution;
            cin >> code >> solution;

            total[code] += solution;
        }

        vector<int> ans;
        
        for(auto it:total){
            ans.push_back(it.second);
        }

        sort(ans.begin(), ans.end());

        for(auto it:ans){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}