class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //bruteforce approach
    //  for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();i++){
    //         if(nums[i]+nums[j]==target){
    //             return {i,j};
    //         }
    //     }
    //  } 

    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
     int diff=target-nums[i];
     if(mp.find(diff)!=mp.end()){
        return {mp[diff],i};
     }
      mp[nums[i]]=i;
    }

     return {};  
    }
};