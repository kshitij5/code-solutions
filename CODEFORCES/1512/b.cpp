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

        vector<pair<int, int>> v;
        char a[n][n];

        for (int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                char ch;
                cin >> ch;

                a[i][j] = ch;
                if(ch == '*')
                    v.push_back(pair<int, int>(i,j));
            }
        }

        if(v[0].first == v[1].first){
            //if same row
            if(v[1].first == n-1){
                a[v[0].first-1][v[0].second] = '*';
                a[v[1].first-1][v[1].second] = '*';
            }else{
                a[v[0].first+1][v[0].second] = '*';
                a[v[1].first+1][v[1].second] = '*';
            }
        }else if(v[0].second == v[1].second){
            //if same column
            if(v[0].second == n-1){
                a[v[0].first][v[0].second-1] = '*';
                a[v[1].first][v[1].second-1] = '*';
            }else{
                a[v[0].first][v[0].second+1] = '*';
                a[v[1].first][v[1].second+1] = '*';
            }
        }else{
            //if diagonal
            a[v[0].first][v[1].second] = '*';
            a[v[1].first][v[0].second] = '*';
        }

        for (int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << a[i][j];
            }cout << endl;
        }
        v.clear();

    }
    return 0;
}