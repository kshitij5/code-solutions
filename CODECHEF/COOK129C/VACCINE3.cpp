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
        int g, p;
        int x[11]= {0};

        cin >> g >> p;
        for (int i = 1 ; i < 11; i++){
            cin >> x[i];
        }

        int people_before = 0;
        for(int i = g+1; i < 11; i++)
            people_before += x[i];

        int minDays = people_before + 1;
        int maxDays = people_before + x[g];

        int min = (minDays+p-1)/p;
        int max = (maxDays+p-1)/p;

        cout << min << " " << max << endl;
    }
    return 0;
}