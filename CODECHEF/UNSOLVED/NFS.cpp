#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        double u, v, a ,s;
        cin >> u >> v >> a >> s;

        if(u==v){
            cout<< "YES"<< endl;
            continue;
        }

        double final_velocity = sqrt(u*u + 2*a*s);

        if(final_velocity>v){
            cout<< "NO"<< endl;
        }else{
            cout<< "YES"<< endl;
        }
    }
    return 0;
}