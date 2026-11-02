class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
       unordered_map<int,int>mp;
        int ans=0;
       for(int num:nums){
        mp[num]++;
       } 
      
       for(auto x:mp){
        if(x.second>1){
        ans=(ans^x.first);
        }
       }
       return ans;
    }
};