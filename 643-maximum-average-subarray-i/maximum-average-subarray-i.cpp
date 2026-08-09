class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
   

    double sum=0; 
    double avg=0;
    double maxavg=INT_MIN;
    for(int i=0;i<k;i++){
        sum=sum+nums[i];
    }
    avg=sum/k;
    maxavg=max(maxavg,avg);
  for(int i=0;i+k<nums.size();i++){
   sum=sum-nums[i]+nums[i+k];
   avg=sum/k;
   maxavg=max(maxavg,avg);
  }
   return maxavg;
    }
};