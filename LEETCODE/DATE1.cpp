#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        lli t, y, x;
        cin >> t >> y >> x ;

        if(t>=y){
            cout << x*y << endl;
        }else{
            cout << x*t+1 << endl;
        }
    }
    return 0;
}