class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

    int totalsum=0,rightsum,leftsum=0,n=nums.size();
    for(int i=0;i<n;i++){
        totalsum=totalsum+nums[i];
    }    
    vector<int>sum(n);
    for(int i=0;i<n;i++){
        rightsum=totalsum-leftsum-nums[i];
        sum[i]=abs(leftsum-rightsum);
        leftsum=leftsum+nums[i];

    }
    return sum;
    }
};