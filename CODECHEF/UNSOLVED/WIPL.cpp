//question url: https://www.codechef.com/JAN21C/problems/WIPL

#include <bits/stdc++.h> 
using namespace std;
//typedef long long int li;

int main(){
    int t, sum = 0;
    cin >> t;

    while(t--){
        int n, k, boxReq = 0;
        int tower1 = 0, tower2 = 0;

        cin >> n >> k ;
        int h[n]={0};

        for(int i=0; i<n; i++){
            cin >> h[i] ;
            sum += h[i];
        }

        if(sum < 2*k){
            cout << "-1" << endl;
            continue;
        }
        
        sort(h , h + n, greater<int>());    //sorted in decending order
        
        int nextElement =  h[boxReq];
        int diff = k;

        while(boxReq < n){  //check here = if required or not
    
            cout<< "next element: "<<nextElement<< " " << boxReq << endl;
            if(tower1 < k){
                tower1 += nextElement;         //if x is less or equal to k then add nextElement
                diff = k - tower1;             //new diff is k-x

                cout<< "diff x: " << diff << " " << tower1 <<endl;

                if(diff<=0){
                    diff = k;
                }
            }
            else if(tower2 < k){
                tower2  += nextElement;
                diff = k - tower2;

               cout<< "diff y: " << diff << " " << tower2<<endl;
                if(diff<=0){
                    break;
                }
            }

            //NOW WE HAVE TO FIND THE NEXT ELEMENT
            //HAVING DIFF IN HAND, boxreq
            //WE NEED TO FIND THE MINIMUM ELEMENT SATISFYING DIFF

// Check this one :-
// 1
// 5 24
// 2 4 10 16 18

// Answer = 5

            
            for(int i = n-1; i > boxReq; i--){
                if(diff <= h[i]){
                    nextElement = h[i];
                    swap(h[i], h[boxReq + 1]);
                    break;
                }                                      // but if no element id found greater than diff
                else{
                    nextElement = h[boxReq + 1];
                }
            }
            boxReq++;
        }

        if(tower2<k)
            cout << "-1" << endl;
        else
            cout << boxReq + 1 << endl;
    }
    return 0;
}