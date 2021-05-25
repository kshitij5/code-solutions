//question url:https://www.codechef.com/JAN21C/problems/FAIRELCT

#include <bits/stdc++.h> 
using namespace std;

typedef long long int li;

li sum(li arr[], int length){
    li sum = 0;
    for(int i = 0; i < length; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,m;
        
        cin >> n >> m;
        
        li a[n] = {0}, b[m] = {0};

        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < m; i++)
            cin >> b[i];

        int smaller = 0;

        if(sum(a, n) > sum(b, m)){
            //sum(a, n) == sum(b, m) || 
            cout << "0" << endl;
            continue;
        }
        //when either a won or is draw
        
        sort(a, a + n);
        sort(b, b + m, greater<int>());
        //else sort

        bool possible = false;
        //then perform swaps
        while(smaller < min(n, m)){
            swap(a[smaller], b[smaller]);
            smaller++;

            cout << sum(a, n) << " " << sum(b, m) << " " << smaller <<endl;
            if(sum(a, n) > sum(b, m)){
                //and check for a winning condition
                possible = true;
                break;
            }
        }

        if(possible)
            cout << smaller << endl;
        else    
            cout << "-1" << endl;
    }

    return 0;
}