//Question link: //Complexiety = O(n)

//Complexiety = O(n)

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
    int t;  //no of test cases
    cin >> t;

    while (t--){
        lli a[10], k;

        for(int i=0; i<10; i++){
            cin >> a[i];
        }
        cin >> k;
        int i = 9;

        while(k>=a[i]){
            k = k - a[i];
            cout << k << " ";
            i -= 1;
        }
        cout << i+1 << endl;
    }

    return 0;
}