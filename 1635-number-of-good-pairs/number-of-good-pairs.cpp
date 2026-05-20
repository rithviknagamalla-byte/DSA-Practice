class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        

    //     int count=0;
    //     for(int i=0;i<nums.size();i++){
    //         for(int j=i+1;j<nums.size();j++){
    //             if(nums[i]==nums[j]){
    //                 count++;
    //             }
    //         }
    //     }
    //     return count;

      unordered_map<int,int>map;
      int count=0;
      for(int i=0;i<nums.size();i++){
      count=count+map[nums[i]];
     map[nums[i]]++;
      }
    return count;
    }
};