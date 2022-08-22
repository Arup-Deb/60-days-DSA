//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> arr, long long n, long long m){
    sort(arr.begin(),arr.end());
    long long mini=INT_MAX;
    long long minie=INT_MAX;
   for(int i=0;i<n-m+1;i++)
   {
       minie=arr[i+m-1]-arr[i];
        mini=min(mini,minie);
       
   }
   return mini;
    
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends