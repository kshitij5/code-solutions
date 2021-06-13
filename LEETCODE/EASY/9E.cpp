#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool isPalindrome(int x){
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
        int x;
        cin >> x;

        cout << isPalindrome(x) << endl;
    }
    return 0;
}