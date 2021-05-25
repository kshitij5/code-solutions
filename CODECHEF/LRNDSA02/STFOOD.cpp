#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
struct STFOOD{
    int s, //store offer food of type ith
        p , //people buying food of type ith
        v;  //price of food of type ith
};

int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        vector<STFOOD> foods;

        while (n--){
            STFOOD food;
            cin >> food.s >> food.p >> food.v;
            foods.push_back(food);
        }

        int last_profit = 0;
        for(auto elm: foods){
            int stores = elm.s + 1; //including chefs store

            int current_profit = floor(elm.p/stores) * elm.v;

            // if(elm.p<stores)continue;

            // if(elm.p % stores == 0){
            //     //when customers can be equally split
            //     current_profit = (elm.p/stores) * elm.v;
            // }else{
            //     current_profit = floor(elm.p/stores) * elm.v;
            // }

            if(current_profit > last_profit){
                last_profit = current_profit;
            }
        }
        cout << last_profit << endl;
    }
    return 0;
}