#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

int removeDuplicates(vector<int>& nums, int val) {
    if(nums.size() == 0) return 0;
    int i = 0;
    for(int j = 0; j < nums.size();j++) {
        if(nums[j] != val){
            nums[i] = nums[j];
            i++;
        }
        // if(nums[i]!=nums[j]){
        //     i++;
        //     nums[i] = nums[j];
        // }
    }
    return i;
}

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        vector<int> array;
        int n;
        cin >> n;
        for(int i = 0; i< n; i++){
            int k;
            cin >> k;
            array.push_back(k);
        }
        removeDuplicates(array, 3);
    }
    return 0;
}