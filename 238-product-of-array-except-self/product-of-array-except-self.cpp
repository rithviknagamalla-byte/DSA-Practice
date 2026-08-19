class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       
    //    vector<int>ans;
    //     for(int i=0;i<nums.size();i++){
    //         int product=1;
    //         for(int j=i+1;j<nums.size()-1;j++){
    //             product=product*nums[j];
    //         }
    //         ans.push_back(product);
    //     }
    //     return ans;
     
     //left product
    vector<int>ans(nums.size(),1);
    int leftpr=1;
    for(int i=0;i<nums.size();i++){
        ans[i]=leftpr;
        leftpr=leftpr*nums[i];
    }
    int rightpr=1;
    for(int i=nums.size()-1;i>=0;i--){
    ans[i]=ans[i]*rightpr;
    rightpr=rightpr*nums[i]; 
    }
   return ans;
    } 
};