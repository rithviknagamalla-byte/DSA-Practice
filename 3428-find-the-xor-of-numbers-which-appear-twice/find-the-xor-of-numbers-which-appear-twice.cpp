class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
       unordered_map<int,int>mp;
        int ans=0;
    //    for(int num:nums){
    //     mp[num]++;
    //    } 
      
    //    for(auto x:mp){
    //     if(x.second>1){
    //     ans=(ans^x.first);
    //     }
    //    }
    //    return ans;
  
       int freq[51]={0};
       for(int num:nums){
        freq[num]++;
       } 

       for(int i=1;i<=50;i++){
        if(freq[i]>1){
        ans=ans^i;
        }
       }
       return ans;
    }
};