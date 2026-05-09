class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        

        // using another vector

        // vector<int>temp;

        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]%2==0){
        //         temp.push_back(nums[i]);
        //     }
        // }
        //  for(int i=0;i<nums.size();i++){
        //     if(nums[i]%2!=0){
        //        temp.push_back(nums[i]); 
        //     }
        //  }
        //  nums=temp;
        // return temp;

     // 2 pointer approach

    //    int left=0,right=nums.size()-1;
    //    while(left<right){
    //    if(nums[left]%2 > nums[right]%2){
    //       swap(nums[left],nums[right]);
    //    }
    //    if(nums[left]%2==0){
    //     left++;
    //    }
    //    else{
    //     right--;
    //    }

    //    }
    //    return nums;
    
    // partition method
     int j=0;
     for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
            swap(nums[i],nums[j]);
            j++;
        }
     }

    return nums;

    }
};