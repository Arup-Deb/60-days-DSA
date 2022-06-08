// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

/* Function to get the middle of the linked list*/
struct Node *deleteMid(struct Node *head);
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		head = deleteMid(head);
		printList(head); 
	}
	return 0; 
} 


// } Driver Code Ends


/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
/*
void printList(struct Node* head)
{
    while (head != NULL) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL\n";
}
*/
/*
Node* deleteMid(Node* head)
{
     Node* curr=head;
   Node* prev=NULL;
  
   int cnt=0;
   while(head)
   {
       head=head->next;
       cnt++;
   }
   cnt=cnt/2;
   int count =0;
   
   while(count!=cnt && curr)
   {
       prev=curr;
       curr=curr->next;
       count++;
   }
   prev->next=curr->next;
   //curr->next=NULL;
   delete (curr);
   
   return head;
    
}
*/
int len (Node*head){
    int count  = 0 ;
    while(head){
        
        head=head->next;
        count++;
    }
    return count;
}
Node* deleteMid(Node* head)
{
    // Your Code Here
    int l = len(head);
    int mid = l/2;
    int count  = 0 ;
    Node*curr = head;
    Node*prev=NULL;
    while(count!=mid && curr){
        prev=curr;
        curr=curr->next;
       
        count++;
        
    }
    prev->next=curr->next;
    delete(curr);
    return head;

    
    
}
