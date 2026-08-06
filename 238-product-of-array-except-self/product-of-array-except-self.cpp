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

      vector<int>ans(nums.size(),1);
      for(int i=1;i<nums.size();i++){
      ans[i]=ans[i-1]*nums[i-1];
      }
      
      int right=1;
      for(int i=nums.size()-1;i>=0;i--){
       ans[i]=ans[i]*right;
       right=right*nums[i];
      }
      return ans;
    }
};