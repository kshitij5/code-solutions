#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

#define MAX 100000

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int arr[MAX+1] = {0};
    arr[1] = 1;
    for(int i = 2; i <= MAX; i++){
        arr[i] = (arr[i-1]*2) % mod;
    }

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        cout << arr[n] << endl;
    }
    return 0;
}