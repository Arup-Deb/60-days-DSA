// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n)
    {
    //   int maxi =INT_MIN;
    //   int sum=0;
    //   for(int i=0;i<n;i++)
    //   {
    //       maxi=max(maxi,arr[i]);
    //       if((maxi-arr[i])>0)
    //       {
    //           sum+=maxi-arr[i];
    //       }
    //   }
    //   return sum;
        int low = 0;
        int high = n-1;
        
        int start =INT_MIN;
        int last = INT_MIN;
        
        long long res =0;
        while(low <= high)
        {
            start = max(start,arr[low]);
            last = max(last,arr[high]);
            
            if(arr[low] < arr[high])
            {
                res += start - arr[low];
                low++;
            }
            else
            {
                res += last - arr[high];
                high--;
            }
        }
        return res;
       
    }
        
    
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends