#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

string decToBinary(int n){
    int temp;
    string str = "";
    if(n == 0)  return "0";
    while (n > 0) {
        temp = n % 2;
        if(!temp)
            str = '0' + str;
        else str = '1' + str;
        n = n>>1;
    }
    return str;
}

int minSwaps(string& str1, string& str2){
    int zeroes = 0, ones = 0;
    for (int i = 0; i < str1.size(); i++) {
        if (str1[i] == '0' && str2[i] == '1') {
            zeroes++;
        }
        else if (str1[i] == '1' && str2[i] == '0') {
            ones++;
        }
    }
    int ans = zeroes / 2 + ones / 2;
  
    if (zeroes % 2 == 0 && ones % 2 == 0) {
        return ans;
    }
    else if ((zeroes + ones) % 2 == 0) {
        return ans + 2;
    }
    else {
        return -1;
    }
}

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int a, b;
        cin >> a >> b;

        string x, y;
        x = decToBinary(a);
        y = decToBinary(b);

        if(x.length()<y.length()){
            while(x.length()<y.length()){
                x = "0" + x;
            }
        }else{
            while(x.length()>y.length()){
                y = "0" + y;
            }
        }

        // cout << x << " " << y << endl;

        int ans = minSwaps(x, y);
        cout << ans << endl;
    }
    return 0;
}