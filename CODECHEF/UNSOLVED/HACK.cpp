#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1)    return false;
    for(int i = 2; i<n; i++){
        if(n%i==0)return false;
    }
    return true;
}

long long f(int d){
    if(d==1)    return 0;
    if(isPrime(d))  return 1;

    int x = 0, y =0;
    for(int i = 2; i<=d/2; i++){
        if(d%i==0){
            x = i;
            break;
        }
    }
    y = d/x;

    return y*f(x) + x*f(y);
}

long long strange_sum (int L, int R) {
    long long sum = 0;
    for(int i = L; i <= R; i++){
        for(int j = 1; j <= i; j++){
            if(i%j==0){
                int val = f(j);
                sum += val;
                // cout << "d = " << i << " | " << j << " | " << val <<endl;
            }
        }
        // cout<< endl;
    }

  return sum;
}

int main() {

    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int L;
        cin >> L;
        int R;
        cin >> R;

        long long out_;
        out_ = strange_sum(L, R);
        cout << out_;
        cout << "\n";
    }
}