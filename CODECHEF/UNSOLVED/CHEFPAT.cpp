//Question link: https://www.codechef.com/JAN21C/problems/DECODEIT
//Complexiety = O(n)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        int a[n];

        for (int i=0; i<n; i++){
            cin >> a[i];
        }

        int temp[n];

        for (int i=0; i<n; i++){
            int min = a[n-i];
            for(int j=0; j<n-i; j++){
                if(a[j]<a[min]){
                    min = j;
                }
            }
            cout << min+1;
            swap(a[n-1], a[min]);
        }

        // for (int i=0; i<n; i++){
        //     cout << temp[i];
        // }

    }

    return 0;
}