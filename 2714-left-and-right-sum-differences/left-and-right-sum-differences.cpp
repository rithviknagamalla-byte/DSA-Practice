class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
  
  int n = nums.size();
  vector<int>answer(n);
  int total_sum=0;


for(int i=0;i<n;i++){
    total_sum=total_sum+nums[i];
}

int rightsum=0,leftsum=0;
int sum=0;

for(int i=0;i<n;i++){
    rightsum=total_sum-leftsum-nums[i];
   sum=abs(leftsum-rightsum);
    answer[i]=sum;
   leftsum=leftsum+nums[i];
}
return answer;


    }
};