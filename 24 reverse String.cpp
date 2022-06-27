#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str ="Arup   ";

    stack<char> s;

    for(int i=0;i<str.length();i++) {
        char ch = str[i];
        s.push(ch);
    }
    string ans="";

    while(!s.empty()) {
        char ch =s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout<<"Answer is: "<<ans<<endl;
     /* real
    //return the address of the string
char* reverse(char *S, int len)
{
     stack<char> s;
   for(int i=0;i<len;i++)
       s.push(S[i]);
       
   char *str = new char[len];
   int j=0;
   while(!s.empty())
   {
       str[j++]=s.top();
       s.pop();
   }
   return str;
    */
}
