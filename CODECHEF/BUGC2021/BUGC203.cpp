#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
    if (y != 0)
        return gcd(y, x % y);
    return x;
}

int GCD_Helper(int v[], int n){
    int ans = v[0];
    for (int i = 1; i < n; i++){
        ans = gcd(v[i], ans);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << GCD_Helper(v, n) << endl;
}