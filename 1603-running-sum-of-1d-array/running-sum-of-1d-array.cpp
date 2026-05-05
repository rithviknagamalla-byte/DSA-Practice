class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    
    int n=nums.size();
    vector<int>runningsum(n);
    for(int i=0;i<n;i++){
        if(i>0){
         runningsum[i]=runningsum[i-1]+nums[i];
        }
        if(i==0){
            runningsum[i]=nums[i];
        }
    }
    return runningsum;
    }
};