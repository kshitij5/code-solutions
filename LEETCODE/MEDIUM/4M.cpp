#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string longestPalindrome(string s);
bool isPalindrome(string str);

int main(){
    string t;  //no of test cases
    cin >> t;

    cout << "Longest String is : " << longestPalindrome(t) << endl;
    return 0;
}

string longestPalindrome(string s) {
        map<int, string> longStr;
        int longest = INT_MIN;
        int len = s.length();
        if(len<2)
            return s;
            cout << len << endl;
        
        for(int i = 0; i<len; i++){
            for(int j = 0; j<=len-i; j++){
                string newstr = s.substr(i, j);
                    if(isPalindrome(newstr)){
                        // longStr.insert({newstr.length(), newstr});
                        if(longest<newstr.length()){
                            longest = newstr.length();
                        }
                    }
            }
        }
        auto longestWord = longStr.find(longest);
        return longestWord->second;
    }
    
bool isPalindrome(string str){
        int l = 0; 
        int h = str.size()-1; 

        while (h > l) { 
            if (str[l--]!= str[h--]) {
                return false; 
            } 
        } 
        return true;
    }
