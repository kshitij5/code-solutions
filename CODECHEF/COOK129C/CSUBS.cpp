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
        int n, k;
        cin >> n >> k;

        map<int, int> mp[k];
        ///array of maps for calculating frequency

        for(int i = 0; i < n; i++){
            int number;
            cin >> number;
            //this is basically used to calculate frequency of elements at each Index
            mp[i%k][number]++;
        }

        int ans = 0;
        for(int i = 0; i < k; i++){
            //traversing over each elements and checking
            // if that element should be there or not
            int total = 0, maxx = -1;
            for(auto a : mp[i]){
                int cnt = a.second;
                //count of ith element
                total += cnt;
                //total sum of all elements of k window
                maxx = max(maxx, cnt);
                //calculating max count element
            }
            ans += total - maxx;
            //total count minus max element count
        }

        cout << ans << endl;

    }
    return 0;
}

int max(int a, int b){
    if(a < b){
        return b;
    }else{
        return a;
    }
}

//https://youtu.be/VBQqNcjRGMY?t=480