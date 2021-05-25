//Question link: https://www.codechef.com/START1C/problems/MVALUE

//Complexiety = O(n)

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        lli a[n];

        for (int i=0; i<n; i++){
            cin >> a[i];
        }

        // sort the array
        if(n>2)
            sort(a, a+n-1);

        lli first = a[n-1], second = a[n-2];
        lli max =  first*second + abs(first-second);
        cout << max << endl;
    }

    return 0;
}