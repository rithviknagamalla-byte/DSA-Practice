class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {

    int mini=INT_MAX;    
    int sum;
    for(int i=0;i<nums.size();i++){
    sum=0;
     for(int j=i;j<nums.size();j++){
        int len=j-i+1;
        sum=sum+nums[j];
        if(l<=len && len<=r && sum>0){
         mini=min(mini,sum);      
        }
     }
     }
     if(mini==INT_MAX){
        return -1;
     }
     return mini;
    }
};