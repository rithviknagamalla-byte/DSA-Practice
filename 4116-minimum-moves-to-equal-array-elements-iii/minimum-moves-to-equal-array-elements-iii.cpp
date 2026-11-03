class Solution {
public:
    int minMoves(vector<int>& nums) {

     int maxelement=INT_MIN;
     for(int i=0;i<nums.size();i++){
        if(maxelement<nums[i]){
        maxelement=max(maxelement,nums[i]);
        }
     }
     int count=0;
     for(int i=0;i<nums.size();i++){
        count=count+(maxelement-nums[i]);
     }
     return count;   
    }
};