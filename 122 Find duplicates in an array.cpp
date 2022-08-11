//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        
    //     vector<int> v;
    //      int ans=0;
        
    //     for(int i=0;i<arr.size();i++)
    //     {
    //         ans=ans^arr[i];
            
    //     }
    //   for(int i=0;i<arr.size();i++)
    //     {
    //         ans=ans^i;
            
    //     }
    
      sort(arr,arr+n);
        vector<int>v;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1] && arr[i]!=arr[i+1])
            v.push_back(arr[i]);
        }
        if(!v.empty())
        {
        return v;
        }
        else
        {
            v.push_back(-1);
            return v;
        }
      
    }

};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends