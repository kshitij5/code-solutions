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
        int x, a ,b;
        cin >> x >> a >> b;

        //here,x is the initial temp ,
        // initial solubility is A g/100ml,
        // solubility increases by B

        int max_solubility = a + (100 - x)*b;
        int max_sugar = max_solubility * 10;

        cout << max_sugar << endl;
    }
    return 0;
}