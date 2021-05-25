#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);

    int pips[] = {0, 20, 36 , 51, 60};

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        if(n>4){
            int height = n / 4;
            int extra = n % 4;
            int additional_face = (4-extra)*4;

            int total_faces = height * 44 + pips[extra] + additional_face ;
            cout << total_faces << endl;
        }else{
            cout << pips[n] << endl;
        }
    }
    return 0;
}