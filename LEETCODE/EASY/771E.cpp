#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> jewel_stones;

        int count = 0;
        for(char c : stones) {
            jewel_stones[c]++;
        }

        for(char c : jewels) {
            count += jewel_stones[c];
        }
        return count;
    }
};