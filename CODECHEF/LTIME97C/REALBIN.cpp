#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

/*----------------------------------------------------------------
    here we basically just needs to check if Y is a power of 2
    why?

    0-------------------1/2------------------1 = true

    Since we start with a rational number we know it will always lie between 0 and 1,
    and Chef wins if he is able to make rational number X to wither 0 or 1
    But, if we look closely we see that, not every number can be made 0 or 1.

    From example we see when X = 1/2, Chef will have Y=1/2 and no matter what
    Divyam does, X will be converted to either 0 or 1

    This can be repeated for what other numbers?
    Can we do the same for 1/4? or 1/8? or 1/16?

    Yes, we can do the same for any number whose denominator is power of 2
    whiich can eventually be reduced to 1 or 0 

*/
signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int a, b;
        cin >> a >> b;

        if(b&(b-1)) {
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}