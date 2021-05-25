#include <bits/stdc++.h>
using namespace std;

//FAST POWER
static int fastPower(int a, int b) {
    int res = 1;
    while (b>0){
        if((b&1)!=0){   //checking if its a odd number
            res = res * a;
        }
        a = (a * a);
        b = b >> 1; //dividing number by half using bitwise rightshift
    }
    return res;
}

//GCD USING EUCLUEDIAN
static int gcd(int a, int b) {
    return a % b != 0 ? b : gcd(b, a%b);
}

//PRIME NUMBER USING SIEVE OF ERATOSTHENES
static vector<bool> sieve(int n) {
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i < n; i++) {
        if(isPrime[i]){
            for(int j = 0; j < n; j++)
                isPrime[j] = false;
        }
    }
    return isPrime;
}

