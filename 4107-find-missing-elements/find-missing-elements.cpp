class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       
       int minimum=INT_MAX;
       int maximum=INT_MIN;
       unordered_set<int>st(nums.begin(),nums.end());
      for(int i=0;i<nums.size();i++){
        minimum=min(minimum,nums[i]);
        maximum=max(maximum,nums[i]);
      }
      vector<int>ans;
      for(int i=minimum;i<maximum;i++){
       if(st.find(i)==st.end()){
        ans.push_back(i);
       }
      }
      return ans;
    }
};