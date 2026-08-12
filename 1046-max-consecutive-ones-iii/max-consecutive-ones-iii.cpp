class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int zerocount=0;
    int left=0;
    int maxlength=INT_MIN;
    for(int i=0;i<nums.size();i++){
     if(nums[i]==0){
        zerocount++;
     }
    while(zerocount>k){
    if(nums[left]==0){
    zerocount--;
    }
    left++;
    }
     maxlength=max(maxlength,i-left+1);
    } 
    return maxlength;
    }
};