#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int n;
    int a;

    int sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;

        sum += a;
        //(a+b)%mod = (a % mod + b % mod) % mod
        sum = ((sum % mod) + mod) % mod;
    }

    int q;
    int x;
    cin >> q;
    for (int i = 0; i < n; i++){
        cin >> x;

        sum += sum;
        //(a+b)%mod = (a % mod + b % mod) % mod
        sum = ((sum % mod) + mod) % mod; 

        cout << sum << endl;
    }



    return 0;
}