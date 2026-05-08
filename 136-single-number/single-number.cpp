class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int n=nums.size();
       // 1st approach

    //   int xorelement=0;
    //   for(int i=0;i<n;i++){
    //     xorelement=xorelement^nums[i];
    //   }
    // return xorelement;


      // 2nd approach
   
   unordered_map<int,int>map;
   for(int i=0;i<nums.size();i++){
    map[nums[i]]++;
   }
   for(int i=0;i<nums.size();i++){
    if(map[nums[i]]==1){
        return nums[i];
    }
   }
return -1;
    }
};