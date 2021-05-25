#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string replace(string s, char c1, char c2) 
{ 
    int l = s.length(); 
  
    // loop to traverse in the string 
    for (int i = 0; i < l; i++) { 
  
        // check for c1 and replace 
        if (s[i] == c1) 
            s[i] = c2; 
  
        // check for c2 and replace 
        else if (s[i] == c2) 
            s[i] = c1; 
    } 
    return s; 
} 

int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        string s = "";
        cin >> s;

        cout << s.replace(s, "party", "pawri") << endl;
    }
    return 0;
}