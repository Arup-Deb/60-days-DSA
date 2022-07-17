// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>ans;
        int f=0,l=0,b=-1;
      int sum=0;
      while(f<n && l<n){
            sum=sum+arr[l];
            if(sum<s){
            
            l=l+1;
            }
            else if(sum==s){
                ans.push_back(f+1);
                ans.push_back(l+1);
                return ans;
            }
            else if(sum>s){
                f=f+1;
                l=f;
                sum=0;
                
            }
        }ans.push_back(-1);
        return ans;
           
         
        }
    
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends