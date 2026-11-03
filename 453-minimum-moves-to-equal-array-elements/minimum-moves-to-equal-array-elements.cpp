class Solution {
public:
    int minMoves(vector<int>& nums) {
      int count=0;
      int mini=INT_MAX;
      for(int i=0;i<nums.size();i++){
        if(mini>nums[i]){
            mini=min(mini,nums[i]);
        }
      }
      for(int i=0;i<nums.size();i++){
        count=count+abs(mini-nums[i]);
      }
      return count;  
    }
};