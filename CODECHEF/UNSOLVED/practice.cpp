#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
    string s, p;
    cin >> s >> p;

    int count = 0;

    for(int i = 0; i < min(s.length(), p.length()); i++){
        if(s[i] == p[i]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}