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
        int n, m ,k;
        cin >> n >> m >> k;

        // int a[k+1] = {0};
        map<int, int> a;

        for(int i = 1; i <= k; i++){
            int input = 0;
            cin >> input;

            a[input]++;
        }

        int count = 0;
        vector <int> disqualified;


        for(auto k: a){
            if(k.second > 1){
                if(k.first<=n){
                    count++;
                    disqualified.push_back(k.first);
                    }
            }
        }

        sort(disqualified.begin(), disqualified.end());
        cout << count << " ";
        for(int i: disqualified){
            cout << i <<" ";
        }
        cout << endl;

    }
    return 0;
}