class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>product(n);
        int rightproduct=1;
        int leftproduct=1;
         for(int i=0;i<n;i++){
            product[i]=rightproduct;
            rightproduct=rightproduct*nums[i];
         }


         for(int i=n-1;i>=0;i--){
            product[i]=product[i]*leftproduct;
            leftproduct=leftproduct*nums[i];
         }
         
         return product;
       
    }
};