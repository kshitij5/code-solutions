//question url:https://www.codechef.com/JAN21C/problems/FAIRELCT

#include <iostream>
#include <array> 
using namespace std;

typedef long int li;

int minArray(li arr[], int n){
    int min = arr[0];
    int pos = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            pos = i;
        }
    }
    return pos;
}

int maxArray(li arr[], int m){
    int max = arr[0];
    int pos = 0;
    for(int i = 0; i < m; i++){
        if(arr[i] > max){
            max = arr[i];
            pos = i;
        }
    }
    return pos;
}

int sum(li arr[], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,m;
        
        cin >> n >> m;
        
        li a[n] = {0}, b[m] = {0};

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < m; i++)
            cin >> b[i];

        int smaller = 0;

        if(sum(a, n) == sum(b, m)){
            cout << "0" << endl;
            continue;
        }
        
        bool possible = false;
        while(sum(a, n) < sum(b, m) && smaller < min(n, m)){
            swap(a[minArray(a, n)], b[maxArray(b, n)]);
            cout << sum(a, n) << " " << sum(b, m) << endl;
            if(sum(a, n) > sum(b, m)){
                possible = true;
            }
            smaller++;
        }

        if(possible)
            cout << smaller << endl;
        else    
            cout << "-1" << endl;
    }

    return 0;
}