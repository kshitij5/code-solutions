#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int firstNum, secondNum, thirdNum;

        for(char c: firstWord) {
            firstNum += (c-'a')*10;
        }

        for(char c: secondWord){
            secondNum += (c-'a')*10;
        }

        for(char c: targetWord){
            thirdNum += (c-'a')*10;
        }

        if(firstNum+secondNum == thirdNum){
            return true;
        }else{
            return false;
        }
    }
};