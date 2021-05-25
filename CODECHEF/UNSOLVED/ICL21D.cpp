#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int reverse(int x) {
        int remainder = 0;
        lli reversed = 0;
        while(x!=0){
            remainder = x%10;
            if ((reversed*10+remainder) > INT_MAX || (reversed*10+remainder) < INT_MIN) {
                return 0;
            }
            reversed = reversed*10+remainder;
            x /= 10;
        }

        return reversed;
    }

int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        cout << reverse(n) << endl;
    }
    return 0;
}

