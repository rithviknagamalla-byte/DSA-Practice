class Solution {
public:
     int pivotIndex(vector<int>& nums){
        
        int leftsum=0,rightsum,totalsum=0;
       for(int i=0;i<nums.size();i++){
        totalsum=totalsum+nums[i];
       }
       for(int i=0;i<nums.size();i++){
      rightsum=totalsum-leftsum-nums[i];
       
       if(leftsum==rightsum){
        return i;
       }
      leftsum=leftsum+nums[i];
       }


        return -1;
    }
};