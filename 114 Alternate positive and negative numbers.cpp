//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	 vector<int>v1;
   vector<int>v2;
   for(int i = 0;i<n;i++){
       if(arr[i]>=0){
           v1.push_back(arr[i]);
       }
       else{
           v2.push_back(arr[i]);
       }
   }
   if(v1.empty()){
       for(int i = 0;i<n;i++){
           arr[i]=v2[i];
       }
   }
   else if(v2.empty()){
       for(int i = 0;i<n;i++){
           arr[i]=v1[i];
       }
   }
   else{
   int i = 0;
   int k = 0;
   int j = 0;
   while(i<n){
       
       if(k<v1.size()){
       arr[i]=v1[k];
       k++;
       i++;
       }
       if(j<v2.size()){
           
           arr[i]=v2[j];
           j++;
           i++;
           
       }
       }
   }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends