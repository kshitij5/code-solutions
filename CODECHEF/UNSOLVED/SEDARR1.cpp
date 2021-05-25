//The special task force Sed managed to obtain a sequence of positive integers A1,A2,…,AN.

//You may perform the following operation any number of times (possibly zero):

//Choose any element of the current sequence and replace it by any positive integer.
//You need to make the sum of the elements of the sequence divisible by a given positive integer K. Find the minimum number of operations you need to perform to achieve this.
#include <bits/stdc++.h>
using namespace std;


int main(){
    int noOfTestCases;  //T
    scanf("%d",&noOfTestCases);
    assert(noOfTestCases >= 1 && noOfTestCases <= 1000);

    while(noOfTestCases--){
        int N, K;
        scanf("%d %d",&N,&K);
        assert(N>=1 && N<=100);
        int seq[N], sum=0;
        for(int i = 0; i < N; i++){
            scanf("%d",&seq[i]);
            sum += seq[i];
            }

        if(sum%K==0)
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;
}
