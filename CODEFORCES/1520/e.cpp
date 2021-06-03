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
        int n;
        cin >> n;
        string str = "";
        cin >> str;

        int lastSheep = INT_MAX;
        int leftsteps = 0;

        //when we move all ships to right position
        for (int i = 0; i < n; i++){
            char c = str[i];
            if(c == '*' && lastSheep<i){
                leftsteps += (i-(lastSheep+1));
                lastSheep++;
            }
            if(c == '*' && lastSheep>i){
                lastSheep = i;
            }
        }
        
        lastSheep = INT_MAX;
        int rightsteps = 0;
        reverse(str.begin(), str.end());

        int start= 0, end = n-1;
        //when we move all ships to right position
        while(start<end){
            
        }

        cout << leftsteps << " " << rightsteps << endl; 

    }
    return 0;
}