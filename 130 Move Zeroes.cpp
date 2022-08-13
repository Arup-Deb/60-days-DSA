class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> heda;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                heda.push_back(nums[i]);
            }
            else count ++;
        }
        for(int i=0;i<count;i++){
            
            
            heda.push_back(0);
        }
        
        nums=heda;
    }
};