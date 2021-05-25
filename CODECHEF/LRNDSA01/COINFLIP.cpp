#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        int g;
        cin >> g;
        while(g--){
            int i,n,q;
            cin >> i >> n >> q;

            int no_of_coins = n/2;

            if(n%2!=0 && i!=q) no_of_coins += 1;
            cout << no_of_coins << endl;
        }
    }
    return 0;
}