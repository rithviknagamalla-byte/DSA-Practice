class Solution {
public:
    void sortColors(vector<int>& nums) {
    
    // brute force approach
    // int i=0,j;
    // for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //     if(nums[i]>nums[j]){
    //         swap(nums[i],nums[j]);
    //     }
    //     }
    // }
   
   // optimal method
    
    // int low=0,mid=0,high=nums.size()-1;
    // while(mid<high){
    //     if(nums[mid]==2){
    //         swap(nums[mid],nums[high]);
    //         mid++;
    //         high--;
    //     }
    //     if(nums[mid]==0){
    //         swap(nums[low],nums[mid]);
    //         low=low+1;
    //         mid=mid+1;
            
    //     }
    //     else{
    //         mid++;
    //     }

    // }

     // counting sort

     int zeroes=0,ones=0,twos=0;
     for(int num:nums){
        if(num==0){
            zeroes++;
        }
       else if(num==1){
            ones++;
        }
        else{
            twos++;
        }
     }
    int i=0;
    while(zeroes--){
        nums[i++]=0;
    }
    
     while(ones--){
        nums[i++]=1;
    }

     while(twos--){
        nums[i++]=2;
    }


  }
};