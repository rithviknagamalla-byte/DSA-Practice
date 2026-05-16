class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        unordered_set<int>set;
        vector<int>result;
        
        for(int i=0;i<nums.size();i++){
            if(set.find(nums[i])!=set.end()){
                result.push_back(nums[i]);
            }
            else{
                set.insert(nums[i]);
            }
        }

        return result;
    }
};