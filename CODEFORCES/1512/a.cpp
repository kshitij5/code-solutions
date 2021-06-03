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
        int arr[n];
        for (int i = 0; i < n; i++){
            int input;
            cin >> input;
            arr[i] = input;
            a[input]++;
        }

        int single = -1;
        for(auto it: a){
            if(it.second == 1){
                single = it.first;
                break;
            }
        }

        for(int i = 0; i < n; i++){
            if(single == arr[i]){
                cout << i+1 << endl;
                break;
            }
        }

    
    }
    return 0;
}