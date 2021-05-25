//Question link: https://www.codechef.com/START1C/problems/COUPON2

//Complexiety = O(n)

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define ORDER 150;

int main(){
    int t;  //no of test cases
    cin >> t;

    while (t--){
        int d, c;   //delivery charge, coupon price
        cin >> d >> c;
        lli day1_cost = 0, day2_cost = 0;

        lli d1[3], d2[3];
        for (int i = 0; i < 3 ; i++){
            cin >> d1[i];
            day1_cost += d1[i];
        }   //input day1

        for (int i = 0; i < 3 ; i++){
            cin >> d2[i];
            day2_cost +=  d2[i];
        }   //input day2

        lli total_charge = day1_cost + day2_cost + 2*d;
            //cost without coupon

            //if coupon bought
        if(day1_cost<150){
            day1_cost += d;
        }
        if(day2_cost<150){
            day2_cost += d;
        }

        lli total_charge_coupon = day1_cost + day2_cost + c;

        if(total_charge_coupon>=total_charge){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}