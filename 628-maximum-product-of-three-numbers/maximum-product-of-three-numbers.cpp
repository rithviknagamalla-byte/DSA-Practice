class Solution {
public:
    int maximumProduct(vector<int>& nums) {


     int n = nums.size();
     int prefixproduct,suffixproduct;
     int mixproduct;
     sort(nums.begin(),nums.end());
     for(int i=0;i<n;i++){
        mixproduct=nums[n-1]*nums[0]*nums[1];
        prefixproduct=nums[n-1]*nums[n-2]*nums[n-3];
        suffixproduct=nums[0]*nums[1]*nums[2];
     }
     int maxproduct=max(mixproduct,max(prefixproduct,suffixproduct));
     return maxproduct;
     }   
    
};