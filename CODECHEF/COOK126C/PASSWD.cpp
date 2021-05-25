#include <bits/stdc++.h>
using namespace std;

int main(){
    int noOfTestCases = 0;
    cin >> noOfTestCases;

    while(noOfTestCases--){
        string s;
        char ch;
        bool flag = false;
        bool lowerCase = false, upperCase = false, specialCase = false, numbers = false;
        cin >> s;

    int l = s.length();
    if(l<10){
        cout << "NO" << endl;
        continue;
    }

    if(islower(s.at(l-1)) || islower(s.at(0))){
        lowerCase = true;
    }

    for (int i = 1; i < l-1; i++) { 
        ch = s.at(i); 

        if(islower(int(ch))) 
            lowerCase = true;
        if(isupper(int(ch))) 
            upperCase = true;
        if(isdigit(int(ch))) 
            numbers = true;
        if (int(ch)>=35 && int(ch)<=38 || int(ch) == 64 || int(ch) == 63)
            specialCase = true;

        if(lowerCase && upperCase && numbers && specialCase){
            flag = true;
            break;
            }
        } 

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}