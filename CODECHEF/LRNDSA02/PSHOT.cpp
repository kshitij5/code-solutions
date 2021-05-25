#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int goalA = 0, goalB = 0;
        int found = 0;
        for(int i=0; i<2*n; i++){
            int goal = s.at(i) - '0';

            if(i%2==0 && goal)  goalA++;
            else if(goal) goalB++;

            int diff = abs(goalA - goalB);
            cout << goalA << " " << goalB << " " << diff  << endl;

            if(diff>(n/2) && i%2!=0){
                cout << i+1 << endl;
                break;
            }
        }
        cout << n << endl;
    }
    return 0;
}