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
        int k;
        cin >> k;

        string str[k];
        for (int i = 0; i < k; i++){
            cin >> str[i];
        }

        int flag = 1;

        for(string s : str) {
            char first = s[0];
            int oflag = 1;
            if(first>='a' && first<='m'){
                for(int i = 0; i < s.length(); i++){
                    char c = s[i];
                    if(c>='a' && c<='m'){
                        continue;
                    }else{
                        oflag = 0;
                        break;
                    }
                }
            }else{
                for(int i = 0; i < s.length(); i++){
                    char c = s[i];
                    if(c>='N' && c<='Z'){
                        continue;
                    }else{
                        oflag = 0;
                        break;
                    }
                }
            }

            if(!oflag) {
                flag = 0;
                break;
            }
        }

        if(flag){
                cout << "YES" << endl;
            }else{
                cout << "NO"<<endl;
            }

    }
    return 0;
}