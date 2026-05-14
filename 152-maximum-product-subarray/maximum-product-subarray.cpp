class Solution { 
public:
    int maxProduct(vector<int>& nums) {
       
       // bruteforce approach
    //   int product;
    //   int maxproduct=nums[0];
    //     for(int i=0;i<nums.size();i++){
    //        product=1;
    //          for(int j=i;j<nums.size();j++){
    //     product=product*nums[j];
    //    maxproduct=max(maxproduct,product);
    //    }
    // }
    //   return maxproduct;

     // 2nd approach
     int product1=1,product2=1;
     int maxproduct=nums[0];
     int n =nums.size();
     for(int i=0;i<nums.size();i++){
        
        product1=product1*nums[i];
        product2=product2*nums[n-i-1];
       
         maxproduct=max(maxproduct,max(product1,product2));
          if(product1==0){
            product1=1;
          }
          if(product2==0){
            product2=1;
          }
     }
    return maxproduct;
    }
};