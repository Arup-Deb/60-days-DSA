// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
//     string longestCommonPrefix (string arr[], int N)
//     {
//       sort(arr, arr + N);

   
//   int en = min(arr[0].size(),
//                 arr[N - 1].size());

   
//   string first = arr[0], last = arr[N - 1];
//   int i = 0;
//   while (i < en && first[i] == last[i])
//       i++;

//   string pre = first.substr(0, i);
   
//   if(pre.size()==0)
//      return "-1";
//   return pre;
//     }

string longestCommonPrefix (string arr[], int N)
   {
       string ans="";
       
       for(int i=0;i<arr[0].length();i++)
       {
           char ch = arr[0][i];
           
           bool match = true;
           
           for(int j=1;j<N;j++)
           
          {
              if(arr[j].size()<i || ch!=arr[j][i])
              {
                  match=false;
                  break;
              }
          }
          if(match==false) break;
          
          else
          
          ans.push_back(ch);
       }
       if(!ans.empty())
       {
       return ans;
       }
       else
       {
           return "-1";
       }
   }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends