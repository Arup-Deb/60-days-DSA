// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
    // vector<int> v;
    
    // for(int i=0;i<n;i++) v.push_back(a[i]);
    
    // for(int i=0;i<m;i++) v.push_back(b[i]);
    
    // sort(v.begin(),v.end());
    // int c=1;
    // for(int i=1;i<v.size();i++)
    // {
    //     if(v[i-1]!=v[i]) c++;
    // }
    
    // return c;
    
        //code here
          set <int>s ;
       for(int i=0;i<n;i++){
           s.insert(a[i]);
           
       }
       for(int i=0;i<m;i++){
           s.insert(b[i]);
       }
       return s.size();
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends