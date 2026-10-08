class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

    // unordered_set<int>st;
    // for(int x:nums){
    //     if(st.find(x)!=st.end()){
    //         return true;
    //     }
    //     st.insert(x);
    // } 
    // return false; 

    unordered_set<int>st;
    for(int i=0;i<nums.size();i++){
        if(st.find(nums[i])!=st.end()){
            return true;
        }
        st.insert(nums[i]);
    }
    return false;
    // unordered_map<int,int>mp;
    // for(int i=0;i<nums.size();i++){
    //     mp[nums[i]]++;
    // }
    // for(int i=0;i<nums.size();i++){
    //     if(mp[nums[i]]>1){
    //         return true;
    //     }
    // }
    // return false;
    }
};