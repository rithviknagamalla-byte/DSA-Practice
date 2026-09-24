class Solution {
public:
    int smallestIndex(vector<int>& nums) {
    
    int mini=nums.size();
   
    for(int i=0;i<nums.size();i++){ 
        int sum=0;
    
        while(nums[i]>0){
        sum=sum+nums[i]%10;
        nums[i]=nums[i]/10;
        }
        if(i==sum){
            mini=min(mini,i);
        }
    }
    return mini==nums.size()?-1:mini;
    }
};