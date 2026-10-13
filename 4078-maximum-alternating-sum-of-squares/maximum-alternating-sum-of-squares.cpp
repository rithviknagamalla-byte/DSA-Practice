class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
    vector<long long>result;

    for(int i=0;i<nums.size();i++){
        result.push_back(1LL*nums[i]*nums[i]);
    }
    sort(result.begin(),result.end());
    
    long long ans=0;
    int n=result.size();
    for(int i=0;i<n;i++){
        if(i<n/2){
            ans=ans-result[i];
        }
        else{
            ans=ans+result[i];
        }
    }
    return ans;
    }
};