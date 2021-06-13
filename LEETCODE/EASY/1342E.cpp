#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int numberOfSteps = 0;

        while (num>0) {
            if(num&1) {
                num -= 1;
            }
            
            cout << num << endl;
            num/=2;
            numberOfSteps++;
        }

        return numberOfSteps;
    }
};