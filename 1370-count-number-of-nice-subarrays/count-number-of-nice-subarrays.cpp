class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
    
    // brute force apprroach

    //    int nice=0;
    //     for(int i=0;i<nums.size();i++){
    //       int count=0;
    //       for(int j=i;j<nums.size();j++){
    //         if(nums[j]%2!=0){
    //         count++;
    //         }
    //        if(count==k){
    //         nice++;
    //        }
    //     }
    // }
    //     return nice;
    
   // using hashing

   unordered_map<int,int>mp;
   int prefixsum=0;
   int ans=0;
   mp[0]=1;
   for(int i=0;i<nums.size();i++){
    if(nums[i]%2!=0){
        prefixsum=prefixsum+1;
    }
    if(mp.find(prefixsum-k)!=mp.end()){
        ans=ans+mp[prefixsum-k];
    }
    mp[prefixsum]++;
   }
   return ans;
    }
};