#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

int mat[1001][1001] = {0};

for(int i=1; i<1001; i++){
    mat[i][1] = mat[i-1][1] + i;
    for(int j=2; j<1001; j++){
        mat[i][j] =  mat[i][j-1] + (j-1) + (i-1);
    }
}

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int x, x1, y, y1;
        cin >> x >> y >> x1 >> y1;

        int sum = 0;
        for(int i = x;  i <= x1;  i++){
            sum += mat[i][y];
        }
        for(int i = y+1;  i <= y1;  i++){
            sum += mat[x1][i];
        }

        cout << sum << endl;
    }
    return 0;
}