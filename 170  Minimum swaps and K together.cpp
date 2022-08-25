//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
         int count = 0;
       for(int i=0;i<n;i++){
           if(arr[i]<=k){
               count++;
           }
       }
       int i=0;
       int j=0;
       int ans = INT_MAX;
       int curCount = 0;
       while(j<n){
           if(arr[j]>k){
               curCount++;
           }
           
           if(j-i+1==count){
               ans = min(ans,curCount);
               if(arr[i]>k){
                   curCount--;
               }
               i++;
           }
           j++;
       }
       return ans==INT_MAX? 0:ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends