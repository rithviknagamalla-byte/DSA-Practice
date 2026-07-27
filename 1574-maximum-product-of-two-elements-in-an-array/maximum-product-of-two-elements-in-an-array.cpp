class Solution {
public:
    int maxProduct(vector<int>& nums) {
    //  sort method

    //    sort(nums.begin(),nums.end());
    //    int p1,p2,product;
    //    int n=nums.size();
       
    //     p1=nums[n-1]-1;
    //     p2=nums[n-2]-1;
    //     product=p1*p2;

    //    return product;

    int first=0,second=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>=first){
            second=first;
            first=nums[i];
        }
        else if(nums[i]>second){
            second=nums[i];
        }
    }
    return (first-1)*(second-1);
    }
};