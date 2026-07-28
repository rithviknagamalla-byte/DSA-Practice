class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
       unordered_map<int,int>mp;
       vector<int>ans(nums1.size());
    
       for(int i=0;i<nums2.size();i++){
        while(!st.empty() && st.top()<nums2[i]){
            mp[st.top()]=nums2[i];
            st.pop();
        }
        st.push(nums2[i]);
       }
       while(!st.empty()){
            mp[st.top()]=-1;
            st.pop();
        }
       for(int i=0;i<nums1.size();i++){
        ans[i]=mp[nums1[i]];
       }
       return ans;
    }
};