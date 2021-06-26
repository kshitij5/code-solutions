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
        string a;
        cin >> a;

        if(a[0] != '1'){
            cout << "1"+a<< endl;
        }else{
            string str = a.substr(0,1)+"0"+a.substr(1);
            cout << str << endl;
        }
    }
    return 0;
}