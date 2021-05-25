//question url: https://www.codechef.com/FEB21C/problems/MEET
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string p;
        cin >> p;
        
        int n;
        cin >> n;
        
        string str[n];

        for(int i=0; i<n; i++){
            cin >> str[i];
        }
        
    // Printing Strings stored in 2D array
    for (int i = 0; i < n; i++)
        std::cout << str[i] << "\n";
    }

}