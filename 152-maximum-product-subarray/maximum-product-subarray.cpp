class Solution { 
public:
    int maxProduct(vector<int>& nums) {
        int i,j;
         long long maxproduct=nums[0],product;
        for(i=0;i<nums.size();i++){
            product=1;
         for(j=i;j<nums.size();j++){
            product=product*nums[j];
            maxproduct=max(maxproduct,product);
         }
         
        }
        return maxproduct;
    }
};