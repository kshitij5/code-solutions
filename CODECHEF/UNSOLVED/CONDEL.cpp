#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*freopen("04.txt","r",stdin);
    freopen("out4.txt","wb",stdout);*/

    lli t;  //no of test cases
    cin >> t;

    while (t--){
        lli n, k;
        cin >> n >> k;

        lli a[n];
        
        lli total1s = 0;
        lli min_sum = 0;

        for(int i=0; i < n; i++){
            cin >> a[i];
            total1s += a[i]; ////count total no of 1s
            if(i<k && a[i] == 1)   min_sum++;  // Compute sum of first window of size k
        } 

        //using sliding window, find sub array with min no of 1s
        lli current_window_sum = min_sum;
        for(int i=k; i < n; i++){
            current_window_sum += a[i] - a[i-k];
            min_sum = min(min_sum, current_window_sum);
        }

        //after getting minimum sum 1 min array, we will
        //find cost for each before flip
        lli total_cost = min_sum*(min_sum + 1)/2 + (total1s - min_sum);
        cout << total_cost << endl;
    }
    return 0;
}