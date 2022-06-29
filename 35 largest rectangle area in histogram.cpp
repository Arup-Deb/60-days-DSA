  // { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
         stack<long long > s;
        s.push(0);
        long long ans=-1;
        int l=0;
        int r=0;
        for(int i=1;i<=n;i++)
        {
            r=i-1;
            while(!s.empty() && (i==n||arr[i]<arr[s.top()]))
            {
                int x=s.top();
                s.pop();
                  l=0;
                if(s.size()>0)
                l=s.top()+1;
               
                ans=max(ans,(r-l+1)*arr[x]);
            }
            s.push(i);
        }
       
        return ans;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends