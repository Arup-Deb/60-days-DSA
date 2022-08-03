
class Solution {
public:
//     void nextPermutation(vector<int>& nums) {
//     int n=nums.size()-1;
//     int p=n;
//     int j=0;
//     int flag=0;
//     for(int i=0;i<n;i++){
//             if(nums[i]<nums[i+1]) flag=1;
//     }
//     if(flag==0)  reverse(nums.begin(),nums.end());
//     else{
//         while( nums[p-1]>=nums[p]){
//             p--;
//         }

//         int left=nums[p-1];
//         int right=nums[p];
//         j=p;
//         for(int i=p+1;i<=n;i++){
//             if(nums[i]>left and nums[i]<=right){
//                 right=nums[i];
//                 j=i;
//             }   
//         }
//         int temp=nums[j];
//         nums[j]=left;
//         nums[p-1]=temp;
//         for(int i=0;i<=n;i++){
//             cout<<nums[i]<<" ";
//         }
//         reverse(nums.begin()+p,nums.end());
//     }
    

// }
    void nextPermutation(vector<int>& nums) {
int i;
int n=nums.size();
for(i=n-2;i>=0;i--){
if(nums[i+1]>nums[i]){
break;
}
}
if(i<0){
sort(nums.begin(),nums.end());
}
else{
int j;
int k=nums[i];
for(j=i+1;j<n;j++){
if(k<nums[j]){
swap(nums[i],nums[j]);
}
}
sort(nums.begin()+i+1,nums.end());
}
}
};