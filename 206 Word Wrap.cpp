// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution 
{
public:
    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
       int n=nums.size(),dp[n];
       dp[n-1]=0;
       for(int i=n-2;i>=0;i--){
           dp[i]=dp[i+1]+(k-nums[i])*(k-nums[i]);
           int len=nums[i];
           for(int j=i+1;j<n;j++)
           {
               len+=nums[j]+1;
               if(len>k)break;
               if(j==n-1)dp[i]=0;
               else dp[i]=min(dp[i],dp[j+1]+(k-len)*(k-len));
           }
       }
       return dp[0];
    } 
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--)
    {
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}  // } Driver Code Ends