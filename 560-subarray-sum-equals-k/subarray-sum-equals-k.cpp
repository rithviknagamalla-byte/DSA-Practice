class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

//     int count=0;
//     for(int i=0;i<nums.size();i++){
//           int sum=0;
//         for(int j=i;j<nums.size();j++){
//             sum=sum+nums[j];
//             if(sum==k){
//                 count++;
//             }
//         }
//     }


// return count;

// optimal soln'
unordered_map<int,int>mp;
int prefixsum=0;
int count=0;
 mp[0]=1;

for(int num:nums){
    prefixsum=prefixsum+num;

    if(mp.find(prefixsum-k)!=mp.end()){
        count=count+mp[prefixsum-k];
    }
    mp[prefixsum]++;
}

return count;
    }
};