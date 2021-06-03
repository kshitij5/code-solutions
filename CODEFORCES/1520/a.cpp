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
        int n;
        string tasks;
        cin  >> n >> tasks;

        string newtasks = "";
        char prev = '\0';

        int isPresent[26] = {0};

        
        //first loop is for removing any adjacent repitations
        for (int i = 0; i < n; i++){
            if(tasks.at(i) != prev){
                newtasks += tasks.at(i);
            }
            prev = tasks.at(i);
        }

        int flag = 0;
        //SECOND LOOP IS TO CHECK FOR DUPLICATE CHARS
        for(int i = 0; i < newtasks.length(); i++){
            if(isPresent[newtasks.at(i)-'A']){
                flag = 1;
                break;
            }else{
                isPresent[newtasks.at(i)-'A'] = true;
            }
        }

        if(flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    }
    return 0;
}