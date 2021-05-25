#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        lli n, m;   //number of researcher, total number of field
        cin >> n >> m;

        int check[m] = {0};
        int inp = 0;

        for (lli i=0; i<n; i++){
            cin >> inp;
            check[inp-1] = 1;
        }

        int flag = 0;
        for (lli i=0; i<m; i++){
            if (check[i] == 0){
                flag = 1;
                break;
            }
        }

        if(flag)    cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}