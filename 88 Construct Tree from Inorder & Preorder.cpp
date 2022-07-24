//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
      int i = 0;
    Node* build(int in[],int pre[],int start,int end)
    {
        if(start>end)
        {
            return NULL;
        }
            Node *temp = new Node(pre[i]);
            i++;
            int pos;
            for(int j=start;j<=end;j++)
            {
                if(in[j] == temp->data)
                {
                    pos = j;
                }
            }            
            temp->left = build(in,pre,start,pos-1);
            temp->right = build(in,pre,pos+1,end);
            return temp;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        return  build(in,pre,0,n-1);
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
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends