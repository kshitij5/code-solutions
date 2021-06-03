#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){

    int ones[10];
    ones[0] = 1;
    for (int i = 1; i < 10; i++){
        ones[i] = ones[i-1]*10+1;
    }

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        int k = n;

        int length = 0;
        while (n> 0){
            n/= 10;
            length++;
        }

        int count = (length-1)*9 + k/(ones[length-1]);
        cout << count << endl;
    }
    return 0;
}