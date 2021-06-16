#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
public:
    vector<double> findPoint(int A[], int B[], int C[]) {
        vector<pair<int,int>> vect;
        vect.push_back(make_pair(A[0]+B[0]-C[0],A[1]+B[1]-C[1]));
        vect.push_back(make_pair(A[0]+C[0]-B[0],A[1]+C[1]-B[1]));
        vect.push_back(make_pair(C[0]+B[0]-A[0],C[1]+B[1]-A[1]));

        sort(vect.begin(),vect.end());

        vector<double> ans;

        ans.push_back((double)vect[0].first);
        ans.push_back((double)vect[0].second);

        return ans;
        }
};

// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
	while (t--)
	{
		int A[2];
		int B[2];
		int C[2];
		cin >> A[0] >> A[1] >> B[0] >> B[1] >> C[0] >> C[1];
		Solution ob;
		vector<double> ans = ob.findPoint(A,B,C);
		printf("%0.6f %0.6f\n",ans[0],ans[1]);
	}
}
  // } Driver Code Ends