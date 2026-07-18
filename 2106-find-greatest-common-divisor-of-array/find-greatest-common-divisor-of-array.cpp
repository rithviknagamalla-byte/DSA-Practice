class Solution {
public:
    int findGCD(vector<int>& nums) {


     int mini=INT_MAX;
     int maxi=INT_MIN;
     for(int i=0;i<nums.size();i++){
      mini=min(mini,nums[i]);
      maxi=max(maxi,nums[i]);
     }
    int result=gcd(mini,maxi);
    return result;
    }
};