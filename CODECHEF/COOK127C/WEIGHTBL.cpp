#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        int w1, w2, x1, x2, m;

        cin >> w1 >> w2 >> x1 >> x2 >> m;

        int weight_increased = w2 - w1;
        // cout << weight_increased << endl;
        if(weight_increased >= x1*m && weight_increased <= x2*m){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }
    return 0;
}