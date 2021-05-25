//Question link: https://www.codechef.com/JAN21C/problems/DECODEIT
//Complexiety = O(n)

#include <iostream>
using namespace std;
typedef long long int lli;

int main(){
    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n, k;

        cin >> n >> k;

        int a[k];   //stores points

        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }

        string str[n];  //childs soln
        for (int i = 0; i < n; i++) {
            cin >> str[i];
        }

        for (int i = 0; i < n; i++) {
            string temp = str[i];
            lli sum = 0;

            for (int j = 0; j < k; j++) {
                int c = (int)temp[j] - 48;
                sum += c * a[j];
            }
            cout << sum << endl;
        }

    }

    return 0;
}