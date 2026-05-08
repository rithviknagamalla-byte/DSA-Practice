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

  // using set
  set<int>s(nums.begin(),nums.end());
  
  for(int num:nums){
    if(s.find(num)!=s.end()){
        s.insert(num);
    }
  }
  int n=s.size();
  vector<int>v(n);
 
  return n;


    }
};