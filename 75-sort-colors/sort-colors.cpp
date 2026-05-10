class Solution {
public:
    void sortColors(vector<int>& nums) {
    
    // brute force approach
    int i=0,j;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
        if(nums[i]>nums[j]){
            swap(nums[i],nums[j]);
        }
        }
    }
   
   // optimal method




   





  }
};