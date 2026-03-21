class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    //brute force

//      long long sum;
//      long long length; 
//      long long minlength=nums.size()+1;  
//     for(int i=0;i<nums.size();i++){
//         sum=0,length=0;
//         for(int j=i;j<nums.size();j++){
//          sum=sum+nums[j];
//          length=j-i+1;
//          if(sum>=target){
//             minlength=min(minlength,length);
//          }
//     }
//  }
//  if(minlength==nums.size()+1){
//      return 0;
//  }
//   return minlength;

//optimal
int sum=0;
int length=0,minlength=nums.size()+1;
int i=0;
int j;

for( j=0;j<nums.size();j++){ 
   sum=sum+nums[j];
   while(sum>=target){
    minlength=min(minlength,j-i+1);
    sum=sum-nums[i];
    i++;
   }
}
if(minlength==nums.size()+1){
    return 0;
}
return minlength;
}
    
};