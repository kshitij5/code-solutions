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
        int x, m, d;
        cin >> x >> m >> d;

        int allowedTime = x+d;
        int takenTime = m*x;

        cout << min(allowedTime, takenTime) << endl;
    }
    return 0;
}