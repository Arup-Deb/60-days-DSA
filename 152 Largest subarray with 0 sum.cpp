//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    //     int start = 0;
    //     int ans = A[start],num=0,c=1;
    //     int i=1;
    //   while(i<A.size())
    // {
    //     ans+=A[i];c++;
    //    
    //     if(ans==0)
    //     {
    //         num=max(num,c);
    //     }
    //     else if(ans>0)
    //     {
    //         ans=ans-A[start];
    //         start++;
    //         c--;
    //     }
    //     else
    //     {
    //         ans+=A[i];
    //     }
    // }
    // return c;
    //////////////////////////////////////////////////////////////////////////////////////////
        // int sum=0,maxLen=0;
        // map<int,int> mp;
        // mp[0]=0;
        // for(int i=0; i<n; i++){
        //     sum+=A[i];
        //     if(mp.find(sum)!=mp.end())
        //     {
        //         maxLen=max(i+1-mp[sum], maxLen);
        //     }
        //     if(mp.find(sum)==mp.end())
        //     {
        //         mp[sum]=i+1;
        //     }
        // }
        // return maxLen; 
         unordered_map<int , int> mp;
        int ans =0;
        int sum =0;
        
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(mp.find(sum)==mp.end()) mp[sum] = i;
            
            if(sum == 0) ans = max(ans , i+1);
            if(mp.find(sum)!=mp.end()) ans = max( ans , i-mp[sum] );
            
        }
        return ans ;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends