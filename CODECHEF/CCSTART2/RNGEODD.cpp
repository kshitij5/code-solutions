#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int l, r;
    cin >> l >> r;

    for(int i = l; i <= r; i++){
        if(i%2) cout << i << endl;
    }
    return 0;
}