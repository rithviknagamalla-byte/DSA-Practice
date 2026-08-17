class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    
   int left=0,right=numbers.size()-1;
   while(left<right){
    int sum=numbers[left]+numbers[right];
    if(sum==target){
        return vector<int>{left+1,right+1};
    }
    else if(numbers[left]+numbers[right]>target){
    right--;
    }
    else{
        left++;
    }
   }
   return vector<int>{};
    }
};