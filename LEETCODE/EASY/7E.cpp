#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool isPalindrome(int x) {
    int reversed = 0;

    if(x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    while(x > reversed){
        reversed = reversed*10 + x%10;
        x /= 10;
    }

    if(x == reversed || x == reversed/10)
        return true;
    else    return false;
}

int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        cout << isPalindrome(n) << endl;
    }
    return 0;
}

