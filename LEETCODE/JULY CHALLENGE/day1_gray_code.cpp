#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Using iterative/ backtracking method
    // approach : 
    // Initially we store 0 and 1 in a vector
    // Then we simply add 2 raised to the power j, where j is 1 to infinite
    // in the reverse order of the elements and push it back in vector
    // TC = O(N*N)
    // SC = O(N)
    vector<int> grayCode(int n) {
        vector<int> code;
        code.push_back(0);
        if(n == 0) return code;
        code.push_back(1);

        int power = 1;
        for(int i = 2; i <= n; i++) {
            power *= 2;
            for(int j = code.size() - 1; j >= 0; j--) {
                code.push_back(power + code[j]);
            }
        }
        return code;
    }

    // Using bits manupulation
    // approach:
    // for a n-bit binary number, we see in its equivalent gray code
    // the leftmost set bits(i) remains the same, while (i+1)th bits
    // in gray is inverse of (i+1)th bit in binary number.

    // in binary, we are basically adding n to n >> 1 bit by bit with no carry(xor);

    // this can be easily achieved using bit manupulation
    vector<int> grayCode(int n) {
        vector<int> codes;
        for(int i = 0; i < (1 << n); i++) {
            /* Right Shift the number by 1
            taking xor with original number */
            codes.push_back(i ^ (i >> 1));
        }
        return codes;
    }

    // Using recursive method
    // based on actual working of gray code generation
    // if we notice, for any n-bit gray code sequence,
    // its basically the binary bits appended to it.
    // for example:
    // when n = 1;
    // 1-bit gray code is = {0, 1}
    // 2-bit gray code is = {00, 01, 11, 10}
    // 3-bit gray code is = {000, 001, 011, 010, 110, 111, 101, 100}

    // we also must notice that, we append '0' traversing forward while '1' traversing backward

    // at last, just convert the binary to decimal and return
    // this method works just fine but is not fit for this question
    
};