class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        
        int c=0,first=0,last=arr.size()-1;
        while(first<last)
        {
            if(arr[first]==val && arr[last]!=val)
            {
                swap(arr[first],arr[last]);
                first++;last--;
            }
            else if(arr[first]==val && arr[last]==val)
            {
                last--;
            }
            else if(arr[first]!=val)
            {
                first++;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
         if(arr[i]!=val)c++;
        }
        return c;
    }
};