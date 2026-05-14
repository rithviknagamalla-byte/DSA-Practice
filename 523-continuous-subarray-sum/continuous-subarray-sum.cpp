class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
     // brute force
    //   long long n=nums.size();
    //   long long sum;
    //   long long count;
    //   for(long long i=0;i<n;i++){
    //     sum=0,count=0;
    //     for(long long j=i;j<n;j++){
    //         sum=sum+nums[j];
    //         count++;
    //         if((sum)%k==0 && count>=2){
    //             return true;
    //         }
    //     }
    //   }

    //     return false;

     // optimal

    unordered_map<int,int>map;
    int sum=0,rem=0;
    for(int i=0;i<nums.size();i++){
     sum=sum+nums[i];
     map[0]=-1;
     rem=sum%k;
      if(map.find(rem)!=map.end()){
         if(i-map[rem]>=2){
         return true;
         }
     }
     else{
        map[rem]=i;
     }
 
}
 return false;

    }
};