class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       
       // 1st approach
       int index=0;
       for(int i=0;i<nums.size();i++){
       if(nums[i]!=val){
        nums[index]=nums[i];
        index++;
       }
       }
        return index;

       // 2nd approach
     vector<int>temp;
     for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            temp[i]=nums[i];
        }
     }
     nums=temp;
     int ans=nums.size();
     return ans;
    }
};