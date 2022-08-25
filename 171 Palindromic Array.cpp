//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    bool isPalindrome(string s){
      int n = s.length();
      int i=0,j=n-1;
      if(n==0 || n==1)
       return true;
      while(i<j){
          if(s[i] != s[j])
           return false;
           i++,j--;
      }
      return true;
    }


   int PalinArray(int a[], int n)
   {
    // code here
    for(int i=0; i< n; i++){
         string str = to_string(a[i]);
         if(isPalindrome(str)== false)
          return 0;
    }
    return 1;
   }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends