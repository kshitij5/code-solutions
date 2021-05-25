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
        int D, d, a, b, c;
        cin >> D >> d >> a >> b >> c;

        int distance = d*D;

        if(distance >= 42)
            cout << c << endl;
        else if(distance >= 21)
            cout << b << endl;
        else if(distance >= 10)
            cout << a << endl;
        else 
            cout << 0 << endl;
    }
    return 0;
}