#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        string ans;
        int counter = 0;
        while(counter < command.length()) {
            if(command[counter] == 'G'){
                ans += 'G';
            }else if(command[counter] == '(' && command[counter + 1] == ')') {
                ans += 'o';
                counter++;
            }else{
                ans += "al";
                counter+=3;
            }
            counter++;
        }
        return ans;
    }
};