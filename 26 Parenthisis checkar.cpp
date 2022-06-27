// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        /*
       int n=x.size();
       if(n<=1)
       {
           return 0;
       }
       else
       {
       for(int i=0;i<n;i++)
       {
           if(x[0]==')' || x[0]=='}' || x[0]==']')
           {
               return 0;
           }
           if(x[i]=='(')
           {
               for(int j=i+1;j<n;j++)
               {
                   if(x[j]==')')
                   {
                       goto statement;
                   }
               }
               return 0;
               statement:
               cout<<"";
           }
          else if(x[i]=='{')
           {
               for(int j=i+1;j<n;j++)
               {
                   if(x[j]=='}')
                   {
                       goto statemnt;
                   }
               }
               return 0;
               statemnt:
               cout<<"";
       }
    else if(x[i]=='[')
           {
               for(int j=i+1;j<n;j++)
               {
                   if(x[j]==']')
                   {
                       goto staement;
                   }
               }
               return 0;
               staement:
               cout<<"";
       }
   
    }
    return 1;
       }
       */
       stack<char>st; 
       for(auto it: x) {
           if(it=='(' || it=='{' || it == '[') st.push(it); 
           else {
               if(st.size() == 0) return false; 
               char ch = st.top(); 
              st.pop(); 
               if((it == ')' && ch == '(') ||  (it == ']' && ch == '[') || (it == '}' && ch == '{')) continue;
               else return false;
           }
       }
       return st.empty(); 
}
};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends