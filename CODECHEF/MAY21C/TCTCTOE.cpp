#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

int check(char k, string x){
    int res = 0;

    if(x[0] == k && x[1] == k && x[2] == k){
        res = 1;
    }else if(x[3] == k && x[4] == k && x[5] == k){
        res = 1;
    }else if(x[6] == k && x[7] == k && x[8] == k){
        res = 1;
    }else if(x[0] == k && x[3] == k && x[6] == k){
        res = 1;
    }else if(x[1] == k && x[4] == k && x[7] == k){
        res = 1;
    }else if(x[2] == k && x[5] == k && x[8] == k){
        res = 1;
    }else if(x[0] == k && x[4] == k && x[8] == k){
        res = 1;
    }else if(x[2] == k && x[4] == k && x[6] == k){
        res = 1;
    }

    return res;
}

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        string x, y, z;
        cin >> x >> y >> z;
        string a = x + y + z;


        int underscore = 0;
        int countX = 0, countO = 0;

        for(int i = 0; i < 9; i++){
            char c = a[i];
            if(c == '_'){
                underscore++;
            }else if(c == 'X'){
                countX++;
            }else{
                countO++;
            }
        }

        //COUNT OF X CANNOT BE LESS THAN COUNT OF O SINCE X PLAYS FIRST
        //also countX cannot bOe more than countO+1 more
        if((countX < countO) or (countX > (countO + 1))){
            cout << 3 << endl;
            continue;
        }

        int xwins = check('X', a);
        int owins = check('O', a);

        // cout << underscore << xwins << owins << endl;

        if((xwins and owins) or (xwins and countX == countO) or (owins and countX>countO)){
            //WHEN BOTH WINS
            cout << 3 << endl;
        }else if((!xwins and !owins) and underscore>0){
            //WHEN NO OF THEM WINS, BUT GAME CAN STILL CONTINUE
            cout << 2 << endl;
        }else if((xwins or owins) or (!xwins and !owins) or (countX+countO+underscore == 9)){
            //WHEN EITHER OF THEM WINS OR IS DRAWN POSITON
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }
    }
    return 0;
}