#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
    int n;
    cin >> n;
    if((!(n%5) and (n%11)) or ((n%5) and !(n%11))){
        cout << "ONE" << endl;
    }else if(!(n%5) and !(n%11)){
        cout << "BOTH" << endl;
    }else{
        cout << "NONE" << endl;
    }
    return 0;
}