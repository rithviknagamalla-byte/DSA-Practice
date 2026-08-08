class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //bruteforce approach

    // int maxprice=0;
    // for(int i=0;i<prices.size();i++){
    //     int price=0;
    //     for(int j=i+1;j<prices.size();j++){
    //         price=prices[j]-prices[i];
    //         maxprice=max(maxprice,price);        
    //     }
        
    // }  
    // return maxprice;

    //optimal approach
    int minprice=INT_MAX;
    int maxprofit=0;
    for(int i=0;i<prices.size();i++){
        if(prices[i]<minprice){
            minprice=prices[i];
        }
       int profit=prices[i]-minprice;
        maxprofit=max(maxprofit,profit);
    }
    return maxprofit;
    }
};