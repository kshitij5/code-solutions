//question url: https://www.codechef.com/JAN21C/problems/WIPL

#include <bits/stdc++.h> 
using namespace std;
typedef long long int li;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k, boxReq = 0;
        int sum = 0;

        cin >> n >> k ;
        int h[n];
        int tower1 = k, tower2 = k;

        for(int i=0; i<n; i++){
            cin >> h[i] ;
            sum += h[i] ;
        }

        if(2*k>sum){
            cout << "-1" << endl;
            break;
        }

        sort(h , h + n);    //sorted in ascending order

        int diff = k;
        boxReq = n-1;
        
        int nextElement = h[boxReq];

        while(tower1>0 || tower2>0 && boxReq>=0){

            for(int i=0; i < boxReq-1; i++){
                if(h[i]>=diff){
                    nextElement = h[i];
                    h[i]=0;
                    sort(h , h + n);
                    break;
                }
                else 
                    nextElement = h[boxReq];
            }
           // cout<<"next: "<< nextElement << " "<< boxReq << endl;

            if(tower1>0){
                tower1 -= nextElement;
                diff = tower1-nextElement;
            //    cout<<"diff-x: "<<diff<<" " << tower1<<endl;
            }
            else 
            if(tower2>0 && tower1<=0){
                tower2 -= nextElement;
                diff = tower2-nextElement;
             //   cout<<"diff-y: "<<diff<<" "<<tower2<<endl;
            }
            if(diff<=0){
                diff = k;
            }
            boxReq--;
        }
        if(boxReq<0)
            cout << "-1" << endl;
        else
            cout << n-boxReq-1 << endl;
    }
    return 0;
}