class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     
     // swap method
     int j=0;
    for(int i=0;i<nums.size();i++){
     if(nums[i]!=0){
        swap(nums[i],nums[j]);
        j++;
     }
    }

    // 2nd method
    vector<int>v;
    int index=0;
    for(int i=0;i<nums.size();i++){
     if(nums[i]!=0){
        v.push_back(nums[i]);
     }
    }
   int zeroes = nums.size()-v.size();
   while(zeroes--){
    v.push_back(0);
    
   }

   nums=v;
     
    }
};