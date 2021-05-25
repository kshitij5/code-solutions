#include <bits/stdc++.h>
#include<algorithm> // for lexicographical_compare()
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);
    string s, p;
    cin >> s >> p;

    int count = 0;
    map<string, int> anagrams;

    for (int len = 1; len <= s.size(); len++){   
        // Pick ending point
        for (int i = 0; i <= s.size() - len; i++)
        {
            int j = i + len-1;

            string temp = s.substr(i, j);

            auto found = anagrams.find(temp);

            if(found == anagrams.end()){
                anagrams.insert({temp, 1});
            }
        }
    }

    for(auto s: anagrams){
        if(s.first>p){
            cout << s.first << endl;
            count++;
        }
    }
    cout << count % mod << endl;
    return 0;
}