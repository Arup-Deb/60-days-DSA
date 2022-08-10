// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    // vector<int> factorial(int N)
    // {
    //     // code here
    //   if(N=0) return 1;
    //   int p=N;
    //   p*=factorial(N-1);
    // }
    vector<int> factorial(int N){
       // code here
//      vector<int>v(3000,0);
//      v[0]=1;
//      for(int i=1;i<=N;i++){
//         for(int j=0;j<3000;j++){
//             v[j]*=i;
//         }
//       for(int j=0;j<3000;j++){
//             if(v[j]>9){
//                 v[j+1]+=(v[j]/10);
//                 v[j]=v[j]%10;
//             }
//         }
        
//      }  int k=0;
//       vector<int>ans;
//       for(int i=2999;i>=0;i--){
//           if(v[i]!=0){
//               k=i;
//               break;
//           }
//       }
//       for(int i=k;i>=0;i--){
//           ans.push_back(v[i]);
//       }
//       return ans;
//   }

  vector<int>res;
        res.push_back(1);
        for(int j=2;j<=N;j++){
            int carr=0;
            for(int i=0;i<res.size();i++){
                int val=res[i]*j+carr;
                res[i]=val%10;
                carr=val/10;
            }
            while(carr!=0){
                res.push_back(carr%10);
                carr/=10;
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends