#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    if(a>b && a>c){
        if(b>c){
            cout << b << endl;
        }else{
            cout << c << endl;
        }
    }else if(b>a && b>c){
        if(a > c){
            cout << a << endl;
        }else{
            cout << c << endl;
        }
    }else if(a>b){
        cout << a << endl;
    }else{
        cout << b << endl;
    }
    return 0;
}