#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli minPrice(lli n, lli e, lli h, lli a, lli b, lli c);
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        lli n, e, h, a, b, c;
        cin >> n >> e >> h >> a >> b >> c ;

        lli min_cost = minPrice(n, e, h, a, b, c);

        if(min_cost == INT_MAX){
            cout << -1 << endl;
        }else{
            cout << min_cost << endl;
        }
    }

    return 0;
}

lli minPrice(lli n, lli e, lli h, lli a, lli b, lli c){
            //base case
        if(n<=0){
            return 0;
        }

        lli min_cost = INT_MAX;

        //all omlette cases
        if(e>=n*2){
            min_cost = min(min_cost, n*a);
        }
        //all milkshake cases
        if(h>=n*3){
            min_cost = min(min_cost, n*b);
        }
        //all chocoCake cases
        if(e>=n && h>=n){
            min_cost = min(min_cost, n*c);
        }

        //shake + cake test case
        if((h-n)/2>=1 && (h-n)/2 >= (n-e)){
            lli temp = 0;
            if(b-c < 0){
                temp = min(n-1, (h-n)/2);
            }else{
                temp = max((lli)1, n-3);
            }
            min_cost = min(min_cost, (b-c)*temp + n*c);
        }
        //if shake + omlette
        if((e/2>= 1) && (e/2>= (3*n - h +2)/3)){
            lli temp = 0;
            if(a-c < 0){
                temp = min(n-1, e/2);
            }else{
                temp = max((lli)1, (3*n - h +2)/3);
            }
            min_cost = min(min_cost, (a-c)*temp + n*c);
        }

        //if omlette + cake
        if((e - n )>= 1 && (e - n )>= n - h){
            lli temp = 0;
            if(a-c < 0){
                temp = min(n-1, e-n);
            }else{
                temp = max((lli)1, (n-h));
            }
            min_cost = min(min_cost, (a-c)*temp + n*c);
        }

        //if omlette + cake + shake
        if((e >= 3) && (h>=4) && (n>=3)){
            min_cost = min(min_cost, a+b+c + minPrice(n-3, e-3, h-4, a, b, c));
        }

        return min_cost;
}