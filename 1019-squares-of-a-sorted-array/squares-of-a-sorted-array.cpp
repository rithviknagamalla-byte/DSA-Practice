class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     
     // 1st approach
    //   for(int i=0;i<nums.size();i++){
    //     nums[i]=nums[i]*nums[i];
    //   }
        
    //  sort(nums.begin(),nums.end()); 
    // return nums;
    
    // 2nd method -- without using sorting
     vector<int>temp(nums.size());
    int start=0,end=nums.size()-1;
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[start]*nums[start]>=nums[end]*nums[end]){
            temp[i]=nums[start]*nums[start];
            start++; 
        }
        else{
            temp[i]=nums[end]*nums[end];
            end--;
        }
    }

   return temp;

    }
};