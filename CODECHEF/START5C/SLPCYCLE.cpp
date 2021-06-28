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
        int l, h;
        cin >> l >> h; 

        string str = "";
        cin >> str;

        vector<int> sleepHours;
        int count = 0;

        for(int i = 0; i < l; i++){
            if(str[i] == '0') {
                while(str[i] == '0') {
                    count++;
                    i++;
                }
                sleepHours.push_back(count);
                count = 0;
            }
        }

        for(int i = 0; i < sleepHours.size(); i++) {
            if(h <= sleepHours[i]) {
                h = 0;
                cout << "YES" << endl;
                break;
            }

            // greedily chef sleep only if he don't have to sleep more than
            // this time in next time
            if(h < 2*(h - sleepHours[i])) {
                continue;
            }
            h = 2*(h - sleepHours[i]);
        }

        if(h>0) cout << "NO" << endl;
    }
    return 0;
}