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

    int s = 0.5*(a+b+c);
    int area = s*(s-a)*(s-b)*(s-c);
    area = sqrt(area);

    if(area>0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}