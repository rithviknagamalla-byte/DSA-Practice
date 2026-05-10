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
    
    int low=0,mid=0,high=nums.size()-1;
    while(mid<high){
        if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            mid++;
            high--;
        }
        if(nums[mid]==0){
            low=low+1;
            mid=mid+1;
        }
        else{
            mid++;
        }

    }









  }
};