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

    while (t--){
        int n;
        cin >> n;
        map<int, int> a;

        int count = 0;
        for (int i = 1; i <= n; i++){
            int input;
            cin >> input;

            input -= i;
            count += a[input];
            a[input]++;
        }

        for(auto x: a){
            cout << x.first << " " << x.second << endl;
        }

        cout << count << endl;
    }
    return 0;
}