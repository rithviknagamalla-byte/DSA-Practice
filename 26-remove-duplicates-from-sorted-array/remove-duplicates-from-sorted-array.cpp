class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // optimal solution
    //  int index=1;
   
    //  for(int i=1;i<nums.size();i++){
    //     if(nums[i]!=nums[index-1]){
    //      nums[index]=nums[i];
    //     index++;
    //     }
      
    //  } 
    //  return index;
   
   // using extra array

   vector<int>temp;
   temp.push_back(nums[0]);

   for(int i=1;i<nums.size();i++){
    if(nums[i]!=nums[i-1]){
        temp.push_back(nums[i]);
    }
   }
   
    nums=temp;
    return nums.size();






    }
};