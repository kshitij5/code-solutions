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
         int x, y;
         cin >> x >> y;

         string result[n];
         for (int i = 0; i < n; i++){
             cin >> result[i];
         }


         for (int i = 0; i < n; i++){
             string candidate = result[i];

            int fully = 0, partially = 0;
             for (int j = 0; j < m; j++){
                 char c = candidate.at(j);
                 if(c=='F'){
                     fully++;
                 }else if(c=='P'){
                     partially++;
                 }
             }
            //  cout << fully << " " << partially << endl;

             if((fully>=x) || (partially>=y && fully==(x-1))){
                 cout << 1;
             }else{
                 cout << 0;
             }
         }
    }
    return 0;
}