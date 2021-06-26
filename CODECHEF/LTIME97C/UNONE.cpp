#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'


/*
The idea here is to look for binary digits of any number
we notice that any even numbers's binary digit starts with 1 and ends with 0
whereas any odd numbers's binary digit starts with 1 and ends with 1
Thus, there arises four cases:
even -> even
even -> odd
odd -> odd
odd -> even

here we notice that only for cases where odd is before either odd or even,
we form a extra ugly count between the joing points

Thus, it is very important to move any odd digit after even.

In this case, at the end.

One more thing to note is that, we cannot optimise an array to lower its ugliness more than by 1

Like if we move every odd to the end, the ugliness of the array will remain the same

Thus, we have to only move any first odd element to the end.
*/

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        //here we do the swap
        for(int i = 0; i < n; i++) {
            if(a[i]%2) {
                swap(a[i], a[n-1]);
                break;
            }
        }

        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// //BRUTE FORCE [X]
// int uglyCount(string bin) {
//     int count = 0;
//     for(int i=0; i<bin.length(); i++) {
//         if(bin[i] == '1' && bin[i+1] == '1') {
//             count++;
//         }
//     }

//     return count;
// }

// string decimalToBinary(int n)
// {
//     //finding the binary form of the number and
//     //coneverting it to string.
//     string s = bitset<64> (n).to_string();
     
//     //Finding the first occurance of "1"
//     //to strip off the leading zeroes.
//     const auto loc1 = s.find('1');
     
//     if(loc1 != string::npos)
//         return s.substr(loc1);
     
//     return "0";
// }

// signed main(){
// //    ios::sync_with_stdio(0);
// //   cin.tie(0); cout.tie(0);

//     map<int, string> binary;
//     int t;  //no of test cases
//     cin >> t;

//     while (t--){
//         int n;
//         cin >> n;

//         vector<int> a;
//         for(int i = 0; i < n; i++) {
//             int element;
//             cin >> element;
//             a.push_back(element);
//         }


//         for(int i = 0; i < n; i++) {
//             if(binary.find(a[i]) == binary.end())
//                 binary[a[i]] = (decimalToBinary(a[i]));
//         }

//         vector<int> newA;
//         int ugliness = INT_MAX;

//         sort(a.begin(), a.end());
//         do {
//             string newbin = "";
//             for(int i = 0; i < n; i++) {
//                 newbin += binary[a[i]];
//             }

//             // ugliness = min(ugliness, uglyCount(newbin));
//             int ugly = uglyCount(newbin);
//             if(ugly < ugliness){
//                 ugliness = ugly;
//                 newA = a;
//             }

//             // cout << newbin << " " << ugliness << endl;
//         }while(next_permutation(a.begin(), a.end()));

//         for(int i : newA) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
