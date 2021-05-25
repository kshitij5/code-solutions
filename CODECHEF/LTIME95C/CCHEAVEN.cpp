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
        int lifetime;
        string s;

        cin >> lifetime >> s;

        int good = 0;
        double heavenPercentage;
        int lastPos = -1;
        for (int i = 0; i < s.length(); i++){
            //if s[i] is equl to 1, it means he is doing good deeds, else bad
            if(s[i]-'0'){
                good++;
            }
            heavenPercentage = (good*100)/(i+1);    
            //if the heavenPercentage at any stance is more then 50, lastPos will store that position
            if(heavenPercentage >= 50){
                lastPos = i+1;
            }
        }

        if(heavenPercentage >= 50){
            cout << "YES" << endl;
        } else if(lastPos > 0){
            cout << "YES" << endl;  //this is the case where doctor strange ends his life before l
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}