#include <iostream>
#include <map> 
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        int a[n], b[m];
        for(int i = 0; i <n; i++){
            cin >> a[i];
        }
        for(int i = 0; i <m; i++){
            cin >> b[i];
        }

        
        map<int, int> orList; 

        for(int i = 0; i <n; i++){
            for(int j = 0; j <n; j++){
                int key = (a[i]|a[j]);
                //cout << key << " ";
                orList[key]++;
            }
            //cout << endl;
        }

    for(auto it=orList.begin(); it!=orList.end(); it++)
    printf("%d ",it->first,it->second);
    cout << endl;
    printf("%d\n", orList.size()+1);

    }
    return 0;
}