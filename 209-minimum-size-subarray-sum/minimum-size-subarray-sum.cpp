class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    // bruteforce
//    int sum;
//    long long length=nums.size()+1;
//    long long minlength=nums.size()+1;
//     for(int i=0;i<nums.size();i++){
//         sum=0;
//       for(int j=i;j<nums.size();j++){
//          sum=sum+nums[j];
//          if(sum>=target){
//          length=j-i+1;
//          }
//         minlength=min(minlength,length);  
//        }  
//  }
//     if(minlength==nums.size()+1){
//     return 0;
//     }
//     return minlength;    
   
   int sum=0;
   int minlength=nums.size()+1;
   int j=0;
   int length=nums.size()+1;
    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
       while(sum>=target){
        minlength=min(minlength,i-j+1);
        sum=sum-nums[j];
        j++;
       }
       
    }
    if(minlength==nums.size()+1){
     return 0;
    }
return minlength;
}     
};