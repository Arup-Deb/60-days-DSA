#include<iostream>
#include<stack>
using namespace std;
class Stack{
//properties
public:
int *arr;
int top;
int size;

//Behaviour
Stack(int size) {
    this->size = size;
    arr = new int[size];
    top=-1;
}

void push(int element){
if(size - top>1){
    top++;
    arr[top] =element;
}
else{
    cout<<"stack overfloe"<<endl;
}

}
void pop(){
if(top>=0){
    top--;

}
else{
    cout<<"stack underflow"<<endl;
}

}
int peek(){
if(top>=0 && top<size) return arr[top];

else{
    cout<<"stack is empty"<<endl;
    return -1;
}

}
bool isEmpty(){
if(top==-1)
{
    return true;
}
else{
    return false;
}

}


};
int main()
{

    Stack st(5);

    st.push(22);
    st.push(23);
    st.push(45);
st.pop();
st.pop();
st.pop();
 cout<<st.peek()<<endl;
 
if(st.isEmpty())
{
    cout<<"Stack is empty"<<endl;
}
else{
    cout<<"Stack is not empty"<<endl;
}

/*
//creation of stack
stack<int> s;

//insert in stack
s.push(5);
s.push(2);
s.push(3);

//pop in stack
s.pop();
s.pop();

cout<<"printing top element: "<<s.top()<<endl;

if(s.empty())
{
    cout<<"stack is empty."<<endl;
}
else{
    cout<<"stack is not empty"<<endl;
}

cout<<"size of stack is "<<s.size()<<endl;
*/










return 0; 
}