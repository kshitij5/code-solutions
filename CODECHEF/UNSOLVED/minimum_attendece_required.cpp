#include <bits/stdc++.h>
using namespace std;

int main(){
    int noOfTestCases;  //T
    scanf("%d",&noOfTestCases);
    assert(noOfTestCases >= 1 && noOfTestCases <= 10);

    while(noOfTestCases--){
        int N;
        string B;
        char chr;
        
        cin >> N;    //N , the number of days till now.
        cin >> B;    //a string B of length N where Bi represents the status of the ith day.

        assert(1 <= N && N <= 120);

        int absentDays = 0;

        for(int i = 0; i < N; i++){
            chr = B.at(i);
            if(chr == '0')
                absentDays++;
        }

        if(absentDays < 30)cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    return 0;
}