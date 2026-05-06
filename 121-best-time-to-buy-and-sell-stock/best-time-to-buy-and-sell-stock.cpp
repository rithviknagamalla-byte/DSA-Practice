class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxprofit=0;
      int profit;
      int minprices=prices[0];
      for(int i=0;i<prices.size();i++){
        if(minprices>prices[i]){
            minprices=prices[i];
        }
      minprices=min(minprices,prices[i]);
      profit=prices[i]-minprices;
      maxprofit=max(maxprofit,profit);
      }
      return maxprofit;

    }

};