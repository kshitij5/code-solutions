#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        lli x, r, m;
        cin >> x >> r >> m;

        lli gain_energy = x;
        lli lost_energy = 0;
        if(m>=r){
            lost_energy = r*60;
            gain_energy += (m-r)*60; 

            cout << lost_energy << gain_energy <<endl;

            if(gain_energy>=lost_energy)    cout << "YES" << endl;
            else cout << "NO" << endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}