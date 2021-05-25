#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        int h[n] = {0};

        for(int i = 0; i < n;i++){
            cin >> h[i];
        }

        for(int i = 0; i < n; i++){
           for(int j = 0; j < n; j++){
               if(h[i]>h[j]){
                   break;
               }else if(h[i]==h[j]){
                   
               }
           } 
        }
    }
    return 0;
}