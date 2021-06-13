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
        int s[4];

        for (int i = 0; i < 4; i++){
            cin >> s[i];
        }

        int finalist[4] = {0};
        for (int i = 0; i < 4; i+=2){
            if(s[i]>s[i+1]){
                finalist[i] = s[i];
            }else{
                finalist[i] = s[i+1];
            }
        }

        sort(s, s+4);
        sort(finalist, finalist + 4);

        if(s[3] == finalist[3] && s[2] == finalist[2]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }






    }
    return 0;
}