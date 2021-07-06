#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

class Solution {
private:
    unordered_map<string, int> charMap;
    int countCharacters(int remainingChars, char lastChar) {
        if(remainingChars == 0) {
            return 1;
        }
        string key = to_string(remainingChars) + lastChar;
        if(charMap.find(key) != charMap.end()) return charMap[key];

        long total = 0;
        switch(lastChar) {
            case 'a':
                total = (total + countCharacters(remainingChars-1, 'e')) % mod;
                break;
            case 'e':
                total = (total + countCharacters(remainingChars-1, 'a') + countCharacters(remainingChars-1, 'i')) % mod;
                break;
            case 'i':
                total = (total + countCharacters(remainingChars-1, 'a') + countCharacters(remainingChars-1, 'e')
                + countCharacters(remainingChars-1, 'o')+countCharacters(remainingChars-1, 'u')) % mod;
                break;
            case 'o':
                total = (total + countCharacters(remainingChars-1, 'i') + countCharacters(remainingChars-1, 'u')) % mod;
                break;
            case 'u':
                total = (total + countCharacters(remainingChars-1, 'a')) % mod;
                break;
        }
        charMap[key] = total;
        return total;
    }
public:
    // Using backtracking with memoization
    int countVowelPermutation(int n) {
        long total = 0;
        char characters[] = {'a','e','i','o','u'};

        for(char c: characters) {
            total = (total + countCharacters(n-1, c)) % mod;
        }

        return total;
    }
};