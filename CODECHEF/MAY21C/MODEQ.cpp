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
        int n, m;
        cin >> n >> m;

        int count = 0;

        //we have t see if it satisfies the (m-y)%a = 0
        vector<int> factors(n+1, 1);
        for(int b = 2; b <= n; b++){
             int y = m % b;
             int factorsOf = m - y;

             //next we have to find factors of 'factorsOf' less than b;
             count += factors[factorsOf];

             for(int i=1; i<b; i++){
                //  if(factorsOf%i == 0){
                //      count++;
                //  }

                
             }
        }


        cout << count << endl;
    }
    return 0;
}