//question url: https://www.codechef.com/FEB21C/problems/HDIVISR
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin >> n;

    int divisor = 10;
    while(divisor > 0){
        if(n%divisor == 0){
            break;
        }
        divisor--;
    }
    cout << divisor;
}