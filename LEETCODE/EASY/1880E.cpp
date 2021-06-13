#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int firstNum = 0, secondNum = 0, thirdNum =0;

        for(char c: firstWord) {
            firstNum = firstNum*10 + (c-'a');
        }

        for(char c: secondWord){
            secondNum = secondNum*10 + (c-'a');
        }

        for(char c: targetWord){
            thirdNum = thirdNum*10 +(c-'a');
        }

        cout << firstNum << " " << secondNum << " " << thirdNum << endl;
        if(firstNum+secondNum == thirdNum){
            return true;
        }else{
            return false;
        }
    }
};