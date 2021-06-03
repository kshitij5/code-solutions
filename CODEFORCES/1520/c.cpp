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

        if(n == 1){
            cout << 1 << endl;
            continue;
        }

        if(n==2){
            cout <<-1 << endl;
            continue;
        }

        int forward = 1;
        int backward = ((n*n)/2)+1;

        if(n%2==1){
            backward++;
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if((i+j) % 2==0){
                    cout << forward << " ";
                    forward++;
                }else{
                    cout << backward << " ";
                    backward++;
                }
            }
            cout << endl;
        }
        
    }
    return 0;
}