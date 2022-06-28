// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */

void sortedInsert(stack<int>& stack, int n)
{
    // two base cases
    if(stack.empty()){
        stack.push(n);
        return;
    }
    if(n >= stack.top()){
        stack.push(n);
        return;
    }
    
    int data = stack.top();
    stack.pop();
   sortedInsert(stack, n);
    stack.push(data);
}
void SortedStack :: sort()
{

//base case
if(s.empty()) {
    return ;
}
int data = s.top();
s.pop();

//recursive call
// sort the remaining stack
    this->sort();

sortedInsert(s, data);
}