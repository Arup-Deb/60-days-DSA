//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        
          vector<int>v;
        unordered_map<int,int>s;
        for (int i = 0; i<k; i++) {
            s[A[i]]++;
        }
        v.push_back(s.size());
        for (int i = k; i<n; i++) {
            s[A[i-k]]--;
            if (s[A[i-k]]==0) s.erase(A[i-k]);
            s[A[i]]++;
            v.push_back(s.size());
        }
        return v;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends