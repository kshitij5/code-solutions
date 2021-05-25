#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b){
    return (a.second > b.second);
}
int main(){
    lli t;  //no of test cases
    cin >> t;

    while (t--){
        int n, x;
        cin >> n >> x;
        vector<pair<int,int> > v;

        for(int i=0; i<n; i++){
            int s, r;
            cin >> s >> r;
            v.push_back({s,r});
        }
        sort(v.begin(), v.end(), sortbysec);

        int space_left = x;
        int highest_rating = INT_MIN;
        for (int i=0; i<n; i++){
            if(space_left >= v[i].first){
                space_left -= v[i].first;
                highest_rating = max(highest_rating, v[i].second);
            }
        // cout << v[i].first << " " << v[i].second << endl;
        }

        cout << highest_rating << endl;
    }
    return 0;
}