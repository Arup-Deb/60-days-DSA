#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(9); 
 q.push(9); 
    cout<<"size of queue is:"<<q.size()<<endl;
    q.pop();
      cout<<"size of queue is:"<<q.size()<<endl;
    if(q.empty()){
        cout<<"Queue is empty"<<endl;    }
        else{
            cout<<"Q is not empty"<<endl;
        }
    
    return 0;
}