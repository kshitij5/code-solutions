#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) { 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
}
int nextPrime(int N) 
{ 
  
    // Base case 
    if (N <= 1) 
        return 2; 
  
    int prime = N; 
    bool found = false; 
  
    // Loop continuously until isPrime returns 
    // true for a number greater than n 
    while (!found) { 
        prime++; 
  
        if (isPrime(prime)) 
            found = true; 
    } 
  
    return prime; 
}

int main(){
    int noOfTestCases = 0;
    cin >> noOfTestCases;

    while(noOfTestCases--){
        int n, sum = 0;
        int a,b,c;
        cin >> n;
        
        if(n-2<=3){
            cout << 0 << endl;
            continue;
        }

        for(int i = 2; i <= n; i++){
            if(isPrime(i)){
                int next = nextPrime(i);
                if(isPrime(i+next))
                    sum++;
                }
        }
        cout << sum << endl;
    }
    return 0;
}