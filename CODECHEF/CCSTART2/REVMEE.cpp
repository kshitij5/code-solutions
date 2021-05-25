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

    int a[t];
    for(int i = 0; i < t; i++){
        cin >> a[i];
    }

    for(int i = 0; i < t; i++){
        cout << a[t-i-1];
    }
    return 0;
}