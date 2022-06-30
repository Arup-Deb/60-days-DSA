// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        
        
        sort(Arr.begin(), Arr.end(), greater<int>());
       long long int sum = 0, prev=0, i=0;
       for(auto x:Arr) sum+=x;
       while(prev*2 <= sum && i<N) {
           prev += Arr[i++];
       }
       return i;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}  // } Driver Code Ends