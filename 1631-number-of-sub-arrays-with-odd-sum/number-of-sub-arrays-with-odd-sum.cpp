class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
    // int count=0;  
    // int sum;
    // for(int i=0;i<arr.size();i++){
    //     sum=0;
    //    for(int j=i;j<arr.size();j++){
    //     sum=sum+arr[j];
    //     if(sum%2!=0){
    //         count++;
    //     }
    //    }
    // }
    // return count%1000000007;
    
    int sum=0,count=0;
    int oddcount=0,evencount=1;
    int mod=1e9+7;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];
        if(sum%2!=0){
            count=(count+evencount)%mod;
            oddcount++;
            
        }
        else{
            count=(count+oddcount)%mod;
            evencount++;
        }
    }

return count;

    }
};