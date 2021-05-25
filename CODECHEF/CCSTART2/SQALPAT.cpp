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

    int counter = 1;

    for(int i = 1; i <= t; i++){
        if(i%2==0){
            counter += 4;
            for(int j = 1; j <= 5; j++){
                cout << counter << " ";
                counter--;
            }
            counter += 6;
        }else{
            for(int j = 1; j <= 5; j++){
                cout << counter << " ";
                counter++;
            }
        }
        cout << endl;
    }
    return 0;
}