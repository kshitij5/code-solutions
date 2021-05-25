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
        int n, a , b;
        cin >> n >> a >> b;

        string string;
        int sarthak = 0, anuradha = 0;
        for (int i = 0; i < n; i++){
            cin >> string;

            //if the first character of word is contained in the word EQUINOX   
            char ch = string[0];
            if(ch=='E'||ch=='Q'||ch=='U'||ch=='I'||ch=='N'||ch=='O'||ch=='X'){
                sarthak += a;
            }else{
                anuradha += b;
            }
        }

        if(sarthak>anuradha){
            cout << "SARTHAK" <<endl;
        }else if(anuradha > sarthak){
            cout << "ANURADHA" << endl;
        }else{
            cout << "DRAW" << endl;
        }

    }
    return 0;
}