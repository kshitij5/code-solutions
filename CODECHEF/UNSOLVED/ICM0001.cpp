#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

bool isNonDecreasing(int a[], int n){
    bool flag = true;
    for (int i = 1; i < n; i++){
        if(a[i] < a[i-1]){
            flag = false;
        }
    }
    return flag;
}

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        int a[n+1] = {0};
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        if(isNonDecreasing(a, n)){
            cout << "YES" << endl;
            cout << "0" << endl;
            continue;
        }

        int swaps = 0;
        int c[n+1] = {0};
        int k =0;

        stack<int> stack;

        for (int i = n; i > 0; i--){

            if(!stack.empty()){
                int top = stack.top();
                if(top<a[i]){
                    while (!stack.empty()){
                        c[k] = stack.top();
                        stack.pop();
                        k++;
                    }
                    stack.push(a[i]);
                }
            else{
                stack.push(a[i]);
                }
            }
            else{
                stack.push(a[i]);
            }
        }

        while (!stack.empty()){
            c[k] = stack.top();
            stack.pop();
            k++;
        }

        if(isNonDecreasing(c, n)){
            cout << "YES" << endl;
            cout << swaps << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}