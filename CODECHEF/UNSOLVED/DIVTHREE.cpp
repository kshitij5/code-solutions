//question url:https://www.codechef.com/JAN21C/problems/DIVTHREE

#include <iostream>
using namespace std;

typedef long long int ll;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        ll k, d; 
                    //n=no of setters
                    //k=problems each day
                    //d=days contest planned to run

        cin >> n >> k >> d;
        
        int a[n] = {0};   //problems by ai-th setter
        int sum = 0;

        for(int i=0; i<n; i++){
            cin >> a[i];
            sum+=a[i];
        }

        if(k*d<sum)
            cout << d <<endl;   //when problems required are more than sums present
        else 
            cout << sum/k << endl;

    }
    return 0;
}