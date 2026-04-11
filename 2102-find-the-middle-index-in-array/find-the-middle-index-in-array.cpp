class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         
         int sum=0;
         for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
         }
        int leftsum=0,rightsum=0;

        for(int i=0;i<nums.size();i++){
            rightsum=sum-leftsum-nums[i];
            if(leftsum==rightsum){
                return i;
            }
            leftsum=leftsum+nums[i];
        }

return -1;
    }
};