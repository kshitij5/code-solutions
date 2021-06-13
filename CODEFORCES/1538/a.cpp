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

        vector<int> a(n);
        for (int &e : a) {
            cin >> e;
        }
        int maxPos = max_element(a.begin(), a.end()) - a.begin();
        int minPos = min_element(a.begin(), a.end()) - a.begin();

        cout << min({
            max(maxPos, minPos) + 1,
            (n - 1) - min(maxPos, minPos) + 1,
            (n - 1) - maxPos + minPos + 2,
            (n - 1) - minPos + maxPos + 2
    }) << "\n";
        
    }
    return 0;
}

