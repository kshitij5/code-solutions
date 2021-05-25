#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
//    ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);

    int t;  //no of test cases
    cin >> t;

    while (t--){
        int n, w, wr;
        cin >> n >> w >> wr;

        map<int, int> weights;
        int weight;


        for (int i = 0; i < n; i++){
            cin >> weight;

    //checking if the elemnet is already present int the map, 
    //if not present , we will push and update its value as 1;
    //else, simply increase its value by 1;
            if(weights.find(weight) == weights.end()){
                weights[weight] = 1;
            }else{
                weights[weight]++;
            }
        }

        int total_weight = wr;
        for(auto& w : weights){

            //w.second  = the coujt of plates
            //w.first = the weight of plates
            if(w.second>=2){
                if(w.second%2){
                    total_weight += (w.second-1)*w.first;
                    //takes only even plates
                }else{
                    total_weight += w.second*w.first;
                }
            }
        }


        if(total_weight>=w){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}