class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int n=nums.size();
      unordered_map<int,int>count;
    for(int i=0;i<nums.size();i++){
        count[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++){
        if(count[nums[i]]>n/2){
            return nums[i];
        }
    }
    return -1;
    }
    
};