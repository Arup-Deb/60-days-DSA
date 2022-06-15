// { Driver Code Starts
//Initial template code for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}


 // } Driver Code Ends
//User function template for C++

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
  /*
   bool detectLoop(Node* head)
   {
     
     Node*low=head;
     Node*high=head;
     while(high!=NULL && high->next!=NULL)
     {
         low=low->next;
         high=high->next->next;
         if(high==low)
          return true;
     }
   return false; 
   }
   */
   /*
      bool detectLoop(Node* head)
      {
          if(!head) return false;
          
          unorderd_map<Node*,int> m;
          
          while(head)
          {
              if(!m[head])
              {
                  m[head]=1;
                  head=head->next;
              }
              else
              return true;
          }
          return false;
      }
      */
      Node* detectLoop(Node* head){

	if(head == NULL)
	return NULL;

	Node* slow = head;
	Node* fast = head;

	while(slow!=NULL && fast!=NULL)
	{
		fast=fast->next;
		if(fast!=NULL)
		{fast=fast->next;}
	
	slow=slow->next;

	if(slow == fast)
	{
		return slow;
	}
	}
	 return NULL;
}
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        if(ob.detectLoop(head) )
            cout<< "True\n";
        else
            cout<< "False\n";
    }
	return 0;
}
  // } Driver Code Ends