#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

int gcd(int a, int b){
        if (a == 0)
            return b;
        return gcd(b%a, a);
}

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        int arr[n];
        int temp[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int count = 0;
        int k = 0;

        for (int i = 0; i < n; i++){
            if(arr[i]%2==0){
                temp[k] = arr[i];
                k++;
            }
        }

        for (int i = 0; i < n; i++){
            if(arr[i]%2!=0){
                temp[k] = arr[i];
                k++;
            }
        }

        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                int gc = gcd(temp[i], 2*temp[j]);
                if(gc>1){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}