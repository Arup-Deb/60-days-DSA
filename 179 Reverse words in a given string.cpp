//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
      string ans="";
       
       for(int i=S.length()-1;i>=0;i--)
       {
           int j=i;
           
           while(j>=0 && S[j]!='.')
           {
               j--;
           }
           ans+=S.substr(j+1,i-j);
           if(j>0)
           {
               ans+='.';
           }
           i=j;
       }
       return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends