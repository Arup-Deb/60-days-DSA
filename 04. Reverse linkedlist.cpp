// { Driver Code Starts
//Initial Template for C++// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};



 // } Driver Code Ends
/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    
    struct Node* reverseList(struct Node *head)
    {
        /*
        Node*p = head;
        int A[10000];
        int i=0;
        while(p!=NULL)
        {
            A[i]=p->data;
            p=p->next;
            i++;
        }
        p=head;i--;
        while(p!=NULL)
        {
            p->data=A[i--];
            p=p->next;
        }
        return head;
        */
        Node* temp = head;
       
        int arr[10000];
        int i=0;
        while(temp!=NULL)
        {
            arr[i]=temp->data;
            i++;
            temp=temp->next;
        }
        temp=head;i--;
        while(temp!=NULL)
        {
            temp->data=arr[i--];
            temp=temp->next;
        }
        
        return head;
    }
    
};
    


// { Driver Code Starts.

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends