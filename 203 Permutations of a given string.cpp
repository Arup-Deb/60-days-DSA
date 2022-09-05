//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		void solve(string s, set<string>&st,int i){
    if(i==s.size()){
        st.insert(s);
    }
    for(int j=i; j<s.size(); j++){
        swap(s[i],s[j]);
        solve(s,st,i+1);
        swap(s[i],s[j]);
    }
}
 vector<string>find_permutation(string S)
 {
     int i=0;
     vector<string>ans;
     set<string>st;
     solve(S,st,i);
for(auto x:st){
   ans.push_back(x);
}
return ans;
 }
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends