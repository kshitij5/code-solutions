#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;
    
    int l = 1, r = 1000000;
    int squares[2000];
    int curr_sqr = 0;

    for(int i = 1; curr_sqr < r; i++){
        curr_sqr = i*i;
        squares[i] = curr_sqr;
    }
        
    while (t--){
        int index = 1;
        int next_input;
        while(index < 2000){
            cout << squares[index] << endl;
            cin >> next_input;

            if(next_input == 1){
                break;
            }else if(next_input == 0){
                index = index + 1;
            }else{
                exit(0);
            }
        }
    }
    return 0;
}