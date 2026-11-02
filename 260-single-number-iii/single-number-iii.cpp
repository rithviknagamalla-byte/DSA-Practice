class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
     vector<int>ans;
     unordered_map<int,int>mp;

     for(int num:nums){
        mp[num]++;
     }
     for(auto x:mp){
        if(x.second<2){
            ans.push_back({x.first});
        }
     }
     return ans;
    }
};