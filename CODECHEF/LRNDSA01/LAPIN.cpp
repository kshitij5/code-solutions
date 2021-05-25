#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        string s;
        cin >> s;

        lli freq[26] = {0};

        lli mid = s.length()/2;
        lli nextIndex = mid, flag = 0;

        if(s.length()%2!=0) nextIndex = mid + 1;
        
        
        for(lli i = 0; i < mid; i++){
            lli index = s.at(i)-'a';
            freq[index]++;
        }//left side increasing freq

        for(lli i = nextIndex; i < s.length(); i++){
            lli index = s.at(i)-'a';
            freq[index]--;
        }//right side decreasing freq

            
        for(lli index = 0 ; index < 26; index++){
            if(freq[index]>0){
                flag = 1;
                break;
                }
        }
        if(flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
        return 0;
}