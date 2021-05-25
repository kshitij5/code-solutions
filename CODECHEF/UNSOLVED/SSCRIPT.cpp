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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s ;

        //k is the length of window
        int count = 0;
        for (int i = 0; i < n; i++){
            char c = s[i];
            if(c=='*'){
                count++;
            }else{
                count = 0;
            }

            if(count==k){
                break;
            }
        }
        count ==k ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}