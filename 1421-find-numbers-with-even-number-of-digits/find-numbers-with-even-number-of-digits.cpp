class Solution {
public:
    int findNumbers(vector<int>& nums) {
    
    int ans=0;
    int count;
    for(int i=0;i<nums.size();i++){
    count=0;
    while(nums[i]!=0){
    nums[i]=nums[i]/10;
    count=count+1;
    }
    if(count%2==0){
        ans=ans+1;
    
    }
    }
     return ans;
    }

};