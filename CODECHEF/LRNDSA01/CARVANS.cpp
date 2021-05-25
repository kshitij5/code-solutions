#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){

    int t;  
    scanf("%d",&t);

    while (t--){
        int n;
        cin >> n;
        if(n == 0) {
            printf("0\n");
            continue;
        }

        int speeds[n];

        for(int i=0; i<n; i++){
            cin >> speeds[i];
        }

    int car_count = 1;
    for(int i = 1; i < n; ++i) {
        if(speeds[i] > speeds[i - 1]) {
            speeds[i] = speeds[i - 1];
            continue;
            }
        ++car_count;
        }
        cout << car_count << endl;
    }

    return 0;
}