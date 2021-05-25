#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int n; 
    cin >> n;

    vector<int> factors;

    for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            if(n/i == i)    factors.push_back(i);
            else {
                factors.push_back(i);
                factors.push_back(n/i);
            }
        }
    }

    sort(factors.begin(), factors.end());
    cout << factors.size() << endl;
    for(auto i : factors){
        cout << i << " " ;
    }
    return 0;
}