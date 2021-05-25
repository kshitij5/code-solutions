//QUESTION LINK: https://www.codechef.com/LTIME91B/problems/THREE

#include <bits/stdc++.h>
using namespace std;

int main(){
        int noOfTestCases;  //T
    cin >> noOfTestCases;
    //assert(noOfTestCases >= 1 && noOfTestCases <= 1000);
    while(noOfTestCases--){
          string str;
          cin >> str;

          int coins = floor(str.length()/3);

    // Define an unordered_map
    unordered_map<char, int> M;
 
    // Traverse string str check if
    // current character is present
    // or not
    for (int i = 0; str[i]; i++) 
    {
        // If the current characters
        // is not found then insert
        // current characters with
        // frequency 1
        if (M.find(str[i]) == M.end()) 
            M.insert(make_pair(str[i], 1));
        // Else update the frequency
        else
            M[str[i]]++;
    }

    int possiblePalindrome = 0;
    for (auto& it : M) {
        possiblePalindrome += floor(it.second/2);
    }
    cout << min(possiblePalindrome, coins) << endl;
    }
    return 0;
}