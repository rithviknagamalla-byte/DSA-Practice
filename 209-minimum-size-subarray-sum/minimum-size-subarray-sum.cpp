class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

//     int minlength=INT_MAX;
//     int length=0;
//     for(int i=0;i<nums.size();i++){
//         int sum=0;
//         for(int j=i;j<nums.size();j++){
//           sum = sum+nums[j];
        
//         if(sum>=target){
//             length=j-i+1;
//            minlength=min(length,minlength);
//            break;
//         }
//         }
//     }
//     if(minlength==INT_MAX){
//         return 0;
//     }
//    return minlength;

int sum=0;
int j=0;
int minlength=INT_MAX;
for(int i=0;i<nums.size();i++){
     sum=sum+nums[i];

    while(sum>=target){
    minlength=min(minlength,i-j+1);
    sum=sum-nums[j];
    j++;
    }
}

if(minlength==INT_MAX){
    return 0;
}

return minlength;
    }
};