#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main() {
    //    ios::sync_with_stdio(0);
    //   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--) {
        int n; cin >> n;

        int z; cin >> z;
        int p; cin >> p;

        int a = 0, b = 0;
        int count = 0;
        for (int i = 1; i < n; i++) {
            a = z / (pow(10, i));
            b = z % ((int)pow(10, i));

            if (a % p == 0 && b % p == 0) {
                cout << a << " " << b << endl;
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}