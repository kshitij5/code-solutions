#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        int a[n];
        bool present[100] = {false};
        vector<int> b;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            b.push_back(a[i]);
            present[a[i]] = true;
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                int elem = abs(a[i]-a[j]);
                if(!present[elem]){
                    present[elem] = true;
                    b.push_back(elem);
                }
            }
        }

        for(int i: b){
            cout << i << " ";
        }

    }
    return 0;
}