// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
    //     int maxi=-100000;
    //     int sum=0;
    //   for(int i=0;i<n;i++)
    //   {
    //       sum+=arr[i];
    //       maxi=max(maxi,sum);
    //   }
       
    //   return maxi;
       /*                     real kadane algorithm                      */
        // int dp[n];
        // dp[0]=arr[0];
        // int maximum= dp[0];
       
        
        // for(int i=1;i<n;i++)
        // {
        //     dp[i]=max(arr[i],dp[i-1]+arr[i]);
            
        //     if(dp[i]>maximum)
            
        //         maximum=dp[i];
            
        // }
        // return maximum;
        /*                      anther approach                                   */
          long long c=0;
      long long max=INT_MIN;
      for(int i=0;i<n;i++){
          c+=arr[i];
          if(c>max){
              max=c;
          }
          if(c<0){
              c=0;
          }
           
      }
      return max;
    }
    
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends