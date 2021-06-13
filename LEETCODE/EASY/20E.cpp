#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

char closingType(char c) {
    if(c == ')')    return '(';
    if(c == '}')    return '{';
    if(c == ']')    return '[';
    return c;
}

bool isValid(string s) {
    stack<char> checker;
    
    for(int i=0;i<s.length();i++){
        char bracket = s[i];
        // cout << bracket << endl;
        if(bracket == '(' || bracket == '[' || bracket == '{'){
            checker.push(bracket);
            continue;
        }
        if(closingType(bracket) == checker.top())
            checker.pop();
        else    break;
    }
    return checker.empty();
}

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        string s;
        cin >> s;
        cout << isValid(s) << endl;
    }
    return 0;
}