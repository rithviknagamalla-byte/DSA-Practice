class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {

   int diff=0;
   sort(nums.begin(),nums.end());
   int mindiff=INT_MAX;
   for(int i=0;i+k-1<nums.size();i++){
   diff=nums[i+k-1]-nums[i];
   mindiff=min(mindiff,diff);
   }
    
    return mindiff;
    }
};