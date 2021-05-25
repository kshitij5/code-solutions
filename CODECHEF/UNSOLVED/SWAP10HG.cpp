// You are given two binary strings S and P, each with length N. A binary string contains only characters '0' and '1'. For each valid i, let's denote the i-th character of S by Si.

// You have to convert the string S into P using zero or more operations. In one operation, you should choose two indices i and j (1≤i<j≤N) such that Si is '1' and Sj is '0', and swap Si with Sj.

// Determine if it is possible to convert S into P by performing some operations.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N.
// The second line contains a single string S.
// The third line contains a single string P.
// Output
// For each test case, print a single line containing the string "Yes" if it is possible to convert S into P or "No" otherwise (without quotes).

#include <iostream>
#include<string> 

using namespace std;

int main(){
    int noOfTestCases;  //T
    cin >> noOfTestCases;
    //assert(noOfTestCases >= 1 && noOfTestCases <= 1000);
    while(noOfTestCases--){
        int N;
        string S, P;

        cin >> N >> S >> P; //TAKING ALL THE INPUTS

        int ones = 0, zeroes = 0;
        for (int i = 0; i < N; i++){
            if (S[i]!=P[i]){
                if(S[i]=='0')
                    zeroes++;
                else
                    ones++;
            }
        }

        if(ones!=zeroes){
            cout << "No\n";
            continue;
            }

        int c1 = 0, ans = true;

        for (int i = 0; i < N; i++){
            if (S[i]!=P[i]){
                if(S[i]=='0'){
                    if(c1>0)
                        c1--;
                    else{
                        ans = false;
                        break;
                    }
                }
                else
                    c1++;
            }
        }
        if(ans)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}

