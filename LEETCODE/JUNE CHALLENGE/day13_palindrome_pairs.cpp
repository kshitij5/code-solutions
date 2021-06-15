#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------NOT WORKING --------------------------------------------//

class Solution {
private:
    bool isPalindrome(string str) {
        int len = str.length();
        for (int i = 0; i < len/2; i++ )
            if (str[i] != str[len-i-1])
                return false;
    
        return true;
    }
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> pairs;

        unordered_map<string, int> palindromeMap;

        for(int i = 0; i < words.size(); i++) {
            palindromeMap.insert(make_pair(words[i], i));
        }

		//Case 1 - Empty string case
        /*
			If there is an empty string in the array(e.g "") in the array that means that every words[i] that is palindrome could be paired with an empty 
			string. e.g if there are words[1] = "aba" and word[5] = "" we can make pairs of it like this [1, 5] and [5, 1], 
			because "aba" + "" = "aba" and "" + "aba" = "aba" as well. 
		*/
        if(palindromeMap.find("")!= palindromeMap.end()){
            int blankIndex = palindromeMap[""];
            for(int i = 0; i < words.size(); i++) {
                if(isPalindrome(words[i])) {
                    pairs.push_back(vector<int>(blankIndex, i));
                    pairs.push_back(vector<int>(i, blankIndex));
                }
            }
        }

        //Case 2 - Reflection Case
		/*
			Here we need to check for reflection case. e.g if words[i] == "abc" and there are "cba" available somewhere in the array it means that 
			we can form a palindrome. Same happens when words[i] == "cba" it will check for "abc"
		*/
        for(int i = 0; i < words.size(); i++) {
            string reversed = words[i];
            reverse(reversed.begin(), reversed.end());

            if(palindromeMap.find(reversed)!= palindromeMap.end()) {
                int index = palindromeMap[reversed];
                if(index!=i) {
                    pairs.push_back(vector<int>(i, index));
                }
            }
        }

        //Case 3 - Partition Case
		/*
		This case is trickier. Basically what we are doing here is that we are checking every possible substring of words[i] 
		if contains palindrome string. If it does the reversed remaining part(out of substring) should be found somewhere 
		in the array to form a palindrome using word[i]. 
		e.g words[i] = "abade" we can partition it with these chunks 
		left = "a" right = "bade"
		left = "ab" right = "ade"
		left = "aba" right = "de"
		left = "abad" right = "e"
		So here the third case left = "aba" which is a palindrome. The remaining part is "de"(Reversed is "ed"). 
		Therefore if somewhere in the array there is string "ed" it means that we can form palindrome by adding "ed" + "aba[de]" = "edabade"
		We need to check it for both left and right parts
		*/

        for(int i = 0; i < words.size(); i++) {
            string word = words[i];

            for(int j = 0; j < word.size(); j++) {
                string left = word.substr(0, j);
                string right = word.substr(j);

                if(isPalindrome(left)) {
                    reverse(left.begin(), left.end());
                    int leftIndx = palindromeMap[left];

                    if(leftIndx!=NULL) {
                        pairs.push_back(vector<int>(leftIndx, i));
                    }
                }

                if(isPalindrome(right)) {
                    reverse(right.begin(), right.end());
                    int rightIndx = palindromeMap[right];

                    if(rightIndx!=NULL) {
                        pairs.push_back(vector<int>(rightIndx, i));
                    }
                }
            }
        }

        return pairs;
    }
};