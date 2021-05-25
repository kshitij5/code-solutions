#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n, c;
        cin >> n >> c;

        char s[n];
        cin >> s;

        cout << s << endl;


        for (int k = 0; k < n; k++){

            int count = 0;
            char x = s[n - 1];
            int i; 

            for (i = n - 1; i > 0; i--) 
                s[i] = s[i - 1];  
            s[0] = x; 

            for(int j = 0; j < n; j++){
                if(s[j] == 0){
                    count++;
                }else{
                    count = 0;
                }

                if(count>c)
                    break;
            }
            if(count<c)
                cout << "YES" << endl;
                break;
        }
        cout << "NO" << endl;


    }

    return 0;
}
