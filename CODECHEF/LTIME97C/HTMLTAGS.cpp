#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        string tag = "";
        cin >> tag;

        int len = tag.length();
        string result = "SUCCESS";
        
        if(tag.substr(0,2)=="</" && tag.substr(len-1)==">" && len>3) {
            for(int i=2; i<len-1; i++){
                char c = tag[i];
                if(isupper(c) || !isalnum(c)) {
                    result = "ERROR";
                    break;
                }
            }
        }else{
            result = "ERROR";
        }

        cout << result << endl;
    }
    return 0;
}