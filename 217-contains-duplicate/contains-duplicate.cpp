class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //   unordered_map<int,int>count;

    //   for(int i=0;i<nums.size();i++){
       
    //    count[nums[i]]++;
    //   }
    //    for(int i=0;i<nums.size();i++){
    //     if(count[nums[i]]>1){
    //         return true;
    //     }
    //    }
    //    return false;



    // sort(nums.begin(), nums.end());
    // int found=0;
    // for(int i=0;i<nums.size()-1;i++){
    //     if(nums[i]==nums[i+1]){
    //         found=1;
    //     }
    // }    
    // if(found==1){
    // return true;
    // }
    // else{
    // return false;
    // }
    unordered_map<int,int>count;
    for(int i=0;i<nums.size();i++){
        count[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++){
 if(count[nums[i]]>1){
        return true;
    }

    }
        return false;
    }
};