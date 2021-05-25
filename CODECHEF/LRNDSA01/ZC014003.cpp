#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
        lli n;
        cin >> n;

        lli budget[n];

        for (lli i = 0; i < n; i++){
            cin >> budget[i];
        }

        sort(budget, budget+n, greater<lli>());

        lli max_cost = budget[0]*(1);
        for (lli i = 0; i < n; i++){
            lli current_cost = budget[i]*(i+1);
            if(current_cost > max_cost){
                max_cost = current_cost ;
            }
        }
        cout << max_cost << endl;
    return 0;
}