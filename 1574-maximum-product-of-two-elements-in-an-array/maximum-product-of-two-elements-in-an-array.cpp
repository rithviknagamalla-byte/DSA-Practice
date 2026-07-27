class Solution {
public:
    int maxProduct(vector<int>& nums) {

       sort(nums.begin(),nums.end());
       int p1,p2,product;
       int n=nums.size();
       for(int i=0;i<n;i++){
        p1=nums[n-1]-1;
        p2=nums[n-2]-1;
        product=p1*p2;
       }
       return product;
    }
};