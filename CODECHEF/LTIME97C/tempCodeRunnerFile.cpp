#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int n, q;
    cin >> n >> q;
    
    int seq[n+1];

    for(int i = 1; i < n+1; i++) {
        cin >> seq[i];
    }

    int l, r, x, y;
    while(q--) {
        int temp;
        cin >> temp;

        if(temp==1) {
            cin >> l >> r >> x ;
            for (int i = l; i <= r ; i++) {
                seq[i] += (x+i-l)*(x+i-l);
            }
        }else{
            cin >> y;
            cout << seq[y] << endl;
        }
    }
    return 0;
}