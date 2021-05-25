#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        lli n, m ,k;
        cin >> n >> m >> k;

        lli bit_xor = 0;

        //for loop for first column
        for(lli i=1; i <= n; i++){
            if(min(i, m)%2==1){
                bit_xor ^= (k+i+1);
            }
        }

        //for loop for last row - first element as its already calculated
        for(lli i=2; i <= m; i++){
            if(min(n, m-i+1)%2==1){
                bit_xor ^= (k+i+n);
            }
        }

        cout << bit_xor << endl;
    }
    return 0;
}