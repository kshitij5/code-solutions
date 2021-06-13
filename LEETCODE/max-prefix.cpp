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
        //n = no. of Elements
        //k = size of windows
        int n, k;
        cin >> n>> k;
        int a[n+1];

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        int prefix[n+1];
        prefix[0] = 0;

        for(int i = 1; i <= n; i++){
            prefix[i] = max(prefix[i-1], a[i]);
        }

        int currMax = prefix[0];

        for(int i = 1; i <= k; i++){
            if(currMax<prefix[i]){
                currMax = prefix[i];
            }
        }

        for(int i = k+1; i <= n; i++){
            cout << currMax << " ";
            if(prefix[i]>currMax){
                currMax = prefix[i];
            }
        }
        cout << currMax << endl;

    }
    return 0;
}