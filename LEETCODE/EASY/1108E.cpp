#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string defanged_ip = "";
        for(char ch: address) {
            if(ch == '.'){
                defanged_ip += "[.]";
            }else{
                defanged_ip += ch;
            }
        }
        return defanged_ip;
    }
};