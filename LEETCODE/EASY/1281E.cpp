#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;

        while (n > 0) {
            int lastdigit = n % 10;
            sum += lastdigit;
            product *= lastdigit;
            cout << lastdigit << endl;

            n /= 10;
        }

        return product - sum;
    }
};