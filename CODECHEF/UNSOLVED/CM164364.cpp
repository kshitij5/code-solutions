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
        int n, x;
        cin >> n >> x;

        int a[n] = {0};

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        int distinct_chocolate = 0;
        int prev_type = a[0];
        for(int i = 1; i < n; i++){
            if(a[i]!=prev_type){
                distinct_chocolate++;
            }else{
                x--;
            }
            prev_type = a[i];
        }

        if(x>0){
            cout << distinct_chocolate - x << endl;
        }else{
            cout << distinct_chocolate << endl;
        }
    }
    return 0;
}