//Question link: https://www.codechef.com/JAN21C/problems/DECODEIT
//Complexiety = O(n)

#include <iostream>
using namespace std;

int main(){
    int t;  //no of test cases

    cin >> t;

    while (t--){
        int m, h;

        cin >> m >> h;

        double bmi = m/(h*h);
        int output = 0;

        if(bmi<=18){
            output = 1;
        }else if(bmi>=19 && bmi<=24){
            output = 2;
        }else if(bmi>=25 && bmi<=29){
            output = 3;
        }else if(bmi>=30){
            output = 4;
        }

        cout << output << endl;
    }

    return 0;
}