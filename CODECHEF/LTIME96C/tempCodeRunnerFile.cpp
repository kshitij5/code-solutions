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
        int a,b,c,d,k;
        cin >> a >> b >> c >> d >> k;
        int tom = a+b;
        int jerry = c+d;

        int distance = tom>jerry? tom-jerry: jerry-tom;

        // check if tom and jerry are in same diagonal
        if((a==b && c==d) || (a!=c && b!=d)){
            if(k>=distance && k%2==0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }else{
            if(distance%2==0 && k%2==0)
                cout << "YES" << endl;
            else if(distance%2!=0 && k%2!=0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        
    }
    return 0;
}