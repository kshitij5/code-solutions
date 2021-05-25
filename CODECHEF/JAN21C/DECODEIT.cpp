//Question link: https://www.codechef.com/JAN21C/problems/DECODEIT
//Complexiety = O(n)

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binaryDecode(string binary){
    int decimals = 0, temp = 0;

    for (int i = 0; i < 4; i++){
        int c = (int)binary[3-i] - 48;
        decimals += c*pow(2,i);
    }
    return decimals;
}

int main(){
    int t;  //no of test cases
    char ch[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};

    cin >> t;

    while (t--){
        int n;  //length of encoded string
        string str = ""; //decoded string
        cin >> n;

        string s;   //encoded binary string
        cin >> s;

        for(int i = 0; i < n; i = i + 4){
            int c = binaryDecode(s.substr(i, i+4));
            str += ch[c];
        }
        cout << str << endl;
    }

    return 0;
}