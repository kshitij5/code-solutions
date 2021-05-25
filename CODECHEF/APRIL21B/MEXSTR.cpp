#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

bool isSubSequence(string t, string s){
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(t[j] == s[i])    j++;
        if(j == t.size())   return true;
    }
    return false;
}

// string decToBinary(int n){
//     int temp;
//     string str = "";
//     if(n == 0)  return "0";
//     while (n > 0) {
//         temp = n % 2;
//         if(temp == 0)
//             str = '0' + str;
//         else str = '1' + str;
//         n = n>>1;
//     }
//     return str;
// }

signed main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        string input;
        cin >> input;

        // int i = 0;
        // while(true){
        //     string a = decToBinary(i);
        //     if(!isSubSequence(a, input)){
        //         cout << a << endl;
        //         break;
        //     }
        //     i++;
        // }
        int flag = 0;
        for(int i = 0; i < input.length(); i++){
            if(input[i] == '0'){
                flag = 1;
                continue;
            }
        }

        if(!flag){
            cout << "0" << endl;
            continue;
        }

        queue<string> q;
        q.push("1");

        while(true){
            string s1 = q.front();  //1
            q.pop();

            if(!isSubSequence(s1, input)){
                cout << s1 << endl;
                break;
            }
            string s2 = s1;
            q.push(s1.append("0"));
            q.push(s2.append("1"));
        }

    }
    return 0;
}