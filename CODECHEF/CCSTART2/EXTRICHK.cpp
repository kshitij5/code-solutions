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
    cin >> a >> b >> c ;

    if(a == b and b == c and c == a){
        cout << 1 << endl;
    }else if((a == b and c != a or c != b)){
        cout << 2 << endl;
    }else if((a =! b and b != c or c != a)){
        cout << 3 << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}