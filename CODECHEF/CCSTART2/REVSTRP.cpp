#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    for(int i = 1; i <= t; i++){
        for(int j = t-1; j >= i; j--){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}