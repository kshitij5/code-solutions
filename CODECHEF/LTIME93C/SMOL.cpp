//Question link: https://www.codechef.com/LTIME93C/problems/SMOL
//Complexiety = O(1)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n, k;
        cin >> n >> k;

        if(n < k || k == 0){
            cout << n << endl;
        }else{
            cout << n%k << endl;
        }
    }

    return 0;
}