#include <bits/stdc++.h>
using namespace std;

int main(){
    int noOfTestCases = 0;
    cin >> noOfTestCases;

    while(noOfTestCases--){
        int l, r;
        cin >> l >> r;

        // int lastPair = 0, totalPair = 0;

        // while(l<=r){

        //     for(int i = l; i<=r; i++){
        //         int nextPair = i + l;
        //         if(nextPair>lastPair){
        //             //cout << nextPair << " ";
        //             totalPair++;
        //             lastPair = nextPair;
        //         }
        //     }
        // l++;
        // }
        cout << (r-l)*2+1 << endl;
    }
    return 0;
}