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
        int a_min, b_min, c_min, t_min, a, b, c;
        cin >> a_min >> b_min >> c_min >> t_min >> a >> b >> c;

        if(a >= a_min && b >= b_min && c >= c_min){
            int t = a + b + c;
            if(t>=t_min){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}