#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n, x, k;

        cin >> n >> x >> k;
        //here, n, ~(n+2)i sthe total number of tiles.tie(0)
        //x = hole 
        //k = bounces at length k

        int offset = (n+1)%k;
        int ifpresent = x % k;

        if(!ifpresent || ifpresent == offset)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        }
    return 0;
}

