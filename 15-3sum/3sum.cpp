class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

    int left=0;
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    while(left<nums.size()-2){
     int mid=left+1;
     int right=nums.size()-1;
    if(left>0 && nums[left]==nums[left-1]){
            left++;
            continue;
        }
     while(mid<right){
        if(nums[left]+nums[mid]+nums[right]==0){
        ans.push_back({nums[left],nums[mid],nums[right]});
        mid++;
        right--;
        while(mid<right && nums[mid]==nums[mid-1]){
            mid++;
            continue;
        }
        while(mid<right && nums[right]==nums[right+1]){
            right--;
            continue;
        }
        }
        else if(nums[left]+nums[mid]+nums[right]<0){
        mid++;
        }
        else{
        right--;
        }
     }
     left++;
    }
    return ans;
    }
};