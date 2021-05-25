#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        int n, k;
        cin >> n >> k;  //number of locations,  number of servers

        int min_distances = 0;
        int pairs = 0;

        if(n%k == 0){
            min_distances = n/k;
            pairs = k;
        }else{
            min_distances = floor(n/k)+1;
            pairs = n - k*floor(n/k);
        }

        cout << min_distances << " " << pairs << endl;
    }
    return 0;
}