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

        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        int x, count = 0;
        for (int i = 0; i < n; i++){
            int res = max(a[i], a[i + 1]) <= 2*max(a[i + 1], a[i]);
            if(!res){
                if(a[i] < a[i + 1]){
                    int nextElement = (a[i]*2)-1;
                    
                }else{
                    
                }
            }
        }
    }
    return 0;
}