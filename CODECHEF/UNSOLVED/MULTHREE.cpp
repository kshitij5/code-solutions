#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        lli k, d0, d1;
        cin >> k >> d0 >> d1;
        k = k-2;

        lli last_num = (d0+d1)%10;
        while (k--){
            last_num +=  last_num%10;
            cout << last_num << endl;//
        }
        if(last_num%3==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}