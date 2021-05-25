#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int r, o,c ;
    cin >> r >> o >> c ;

    //target = r
    int remaining_overs = 20 - o;

    int scorable_runs = remaining_overs * 36 + c;

    if(scorable_runs>r)   cout << "YES" << endl;
    else    cout << "NO" << endl;
    return 0;
}