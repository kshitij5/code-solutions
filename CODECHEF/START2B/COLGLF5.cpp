#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        int n,m;
        cin >> n >> m;

        int f[n] = {0}, c[m] = {0};

        for (int i = 0; i < n; i++)
            cin >> f[i];

        for (int j = 0; j < m; j++)
            cin >> c[j];

        int isOnFootball = 1;
        int changeCounter = 0;

        int i = 0, j = 0;
        while(i<n && j<m){
            if(f[i] < c[j]){
                if(!isOnFootball){
                    changeCounter++;
                    isOnFootball = 1;
                }
                i++;
            }else{
                if(isOnFootball){
                    isOnFootball = 0;
                    changeCounter++;
                }
                j++;
            }
        }
        cout << changeCounter+1 << endl;
    }
    return 0;
}