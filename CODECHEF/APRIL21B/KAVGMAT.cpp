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
        int n, m, k;
        cin >> n >> m >> k;

        int matrix[n+1][m+1];
        int prefix[n+1][m+1];
        int count = 0;

        for (int i = 0; i <= n; i++){
            for (int j = 0; j <= m; j++){

                if(i==0 || j==0){
                    matrix[i][j] = 0;
                    prefix[i][j] = 0;
                    continue;
                }

                cin >> matrix[i][j];                
                if(matrix[i][j]>=k) count++;
            }
        }

        //n^2

        //prefix sum of matrix
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                prefix[i][j] = matrix[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
                cout << prefix[i][j] << " ";
            }
            cout << endl;
        }

        int x = 1;
        while(x<n){
            for (int i = 1; i <= n-x; i++){
                for(int j = 1; j <= m-x; j++){
                    int a = i+x, b = j+x;

                    int sum = prefix[a][b] - prefix[i-1][b] - prefix[a][j-1] + prefix[i-1][j-1];
                    int average = sum / ((x+1)*(x+1));
                    
                    if(average>=k) {  
                        count++;
                    // cout << sum << " " << average <<  " " << x+1 << endl;
                    // cout << a << " " << b << " " << c << " " << d << " | "  << endl;
                    }
                }
                // cout << endl;
            }
            x++;
        }

        cout << count << endl;
    }
    return 0;
} 