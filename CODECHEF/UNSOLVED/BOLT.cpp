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
        float k1, k2, k3, v;
        float target = 9.58;
        cin >> k1 >> k2 >> k3 >> v;

        float new_speed = k1 * k2 * k3 * v;
        float time_taken = (int)((100/new_speed)*100 + 0.5);
        float rounded_time = time_taken/100;
        // cout << rounded_time << '\n';

        if(rounded_time >= target) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}