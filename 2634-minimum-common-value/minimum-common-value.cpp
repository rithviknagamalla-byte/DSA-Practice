class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
      // bruteforce
    //    long long minelement=INT_MAX; 
    //     for(long long i=0;i<nums1.size();i++){
    //         for(long long j=0;j<nums2.size();j++){
    //             if(nums2[j]==nums1[i]){
    //                  minelement=min(minelement,(long long)nums2[j]);
    //                  break;
    //             }
              
    //         }
    //     }
    //     if(minelement==INT_MAX){
    //         return -1;
    //     }
    //     return minelement;
    

    long long left=0,right=0;

    while(left<nums1.size() && right<nums2.size()){
     
     if(nums1[left]==nums2[right]){
        return nums1[left];
     }
      
     if(nums1[left]<nums2[right]){
        left++;
     }
     else{
        right++;
     }
     
    }
return -1;
    }  
};