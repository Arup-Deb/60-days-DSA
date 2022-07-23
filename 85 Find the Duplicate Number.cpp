class Solution {
public:
   // int findDuplicate(vector<int>& nums)
   //  {
   //       sort(nums.begin(),nums.end());
   //     int n=nums.size();int p=0;
   //      for(int i = 1; i < n; i++)
   //      {
   // // if two consecutive elements are equal
   // // you have find a duplicate
   // // break the loop
   //          if(nums[i] == nums[i-1])
   //          {
   //           p= nums[i];
   //              goto statement;
   //          }
   //      }
   //     statement:
   //     return p;
   //      // return duplicate value
   //  }
    
    //          or              
    int findDuplicate(vector<int>& nums) {
        int low = 1, high = nums.size() - 1, cnt;
        
        while(low <=  high)
        {
            int mid = low + (high - low) / 2;
            cnt = 0;
            // cnt number less than equal to mid
            for(int n : nums)
            {
                if(n <= mid)
                    ++cnt;
            }
            // binary search on left
            if(cnt <= mid)
                low = mid + 1;
            else
            // binary search on right
                high = mid - 1;
            
        }
        return low;
    }
	// for github repository link go to my profile.
    
};