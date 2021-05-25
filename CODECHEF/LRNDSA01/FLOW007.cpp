#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n, temp;
        cin >> n;
        int reversed_n = 0;
        while(n!=0){
            temp = n%10;
            reversed_n = reversed_n*10 + temp;
            n /= 10;
        }
        cout << reversed_n << endl;
    }
    return 0;
}