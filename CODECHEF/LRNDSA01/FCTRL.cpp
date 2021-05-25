#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        lli n;
        cin >> n;

        lli zeroes = 0;
        while(n>0){
            zeroes += n/5;
            n /= 5;
        }

        cout << zeroes << "\n";
    }
    return 0;
}