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

    int evensum = 0, even = 2, oddsum = 0,odd = 1;
    for(int i = 0; i < t; i++){
        evensum += even;
        oddsum += odd;

        even += 2;
        odd += 2;
    }

    cout << oddsum <<" "<< evensum << endl;
    return 0;
}