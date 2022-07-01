#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n,p;
        cin>>n>>p;
        long long arr[n];
        long long sum=0;
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        if(p==0 || sum<p )
        {
            cout<<sum<<endl;
        }
        else
        {
        int q=0;
        while(sum>=q)
        {
            q+=p;
        }
         q=q-p;
        int k=sum-q;
        cout<<k<<endl;
        }
    }
}