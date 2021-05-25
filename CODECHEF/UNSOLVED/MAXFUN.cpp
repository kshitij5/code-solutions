//question url: https://www.codechef.com/FEB21C/problems/MAXFUN
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);

        int x = a[0];
        int y = a[1];
        int z = a[n-1];

        cout << abs(x-y) + abs(y-z) + abs(z-x)<< endl;
    }
}