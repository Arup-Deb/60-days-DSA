//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// class Solution {
//   public:
//      int canRepresentBST(int arr[], int N) {
//          stack<int>s;
//          s.push(arr[0]);
//          int x=-1;
//          for(int i=1;i<N;i++)
//          {
//              if(arr[i]<arr[i-1])
//              {
//                  if(arr[i]<x)
//                  return 0;
//                  s.push(arr[i]);
//              }
//              else
//              {
//                 while(!s.empty() && s.top()<arr[i])
//                 {
//                     x=s.top();
//                     s.pop();
//                 }
//                 s.push(arr[i]);
//              }
//          }
//          return 1;
//   } 
 class Solution {
  public:
struct Node
 {
     int data;
     struct Node *left;
     struct Node *right;
 };
 void preorder(Node *root,vector<int> &ans)
 {
     if(root!=NULL)
     {
         ans.push_back(root->data);
         preorder(root->left,ans);
         preorder(root->right,ans);
     }
 }
 int i=0;
 Node * build(int lb,int ub,int a[],int n)
 {
     if(i>=n || a[i]>ub || a[i]<lb)
      return NULL;
     else
     {
         Node *p=(Node *)malloc(sizeof(Node));
         p->data=a[i];
         p->left=NULL,p->right=NULL;
         i=i+1;
         p->left=build(lb,p->data,a,n);
         p->right=build(p->data,ub,a,n);
         return p;
     }
 }
int canRepresentBST(int a[], int n) 
{
     Node *root=build(INT_MIN,INT_MAX,a,n);
       vector<int> ans;
       preorder(root,ans);
       for(int i=0;i<n;i++)
       {
           if(a[i]!=ans[i])
            return 0;
       }
       return 1;
   }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        Solution ob;
        cout << ob.canRepresentBST(arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends