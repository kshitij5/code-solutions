#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'


bool isBeautiful(string s){
    if(s.length()==1){
        return true;
    }

    s = "9"+s+"8";

    int i = 0;
    char lastCharacter = '\0';

    while (i < s.length()){
        char c = s[i];

        if(c == '?'){
            lastCharacter = s[i- 1];
            int count = 0;
            while(s[i]=='?'){
                count++;
                i++;
            }
            i--;

            if(((lastCharacter == s[i+1] && count%2==0)  || (lastCharacter != s[i+1] && count%2!=0)) && (lastCharacter !='8' || lastCharacter !='9')){
                return false;
            }
        }
        i++;
    }

    return true;
}

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        string s;
        cin >> s;

        int count = 0;
        string temp = "";

        for (int i = 0; i < s.length(); i++)
            for (int len = 1; len <= s.length() - i; len++){
                cout << s.substr(i, len) << " res: ";
                cout << isBeautiful(s.substr(i, len)) << endl;

                // if(isBeautiful(s.substr(i, len))){
                //     count++;
                // }
            }

            cout << count << endl;
    }
    return 0;
}
