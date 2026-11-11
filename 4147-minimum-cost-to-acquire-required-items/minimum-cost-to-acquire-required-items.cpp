class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

    long long common=min(need1,need2);
    long long remaining=abs(need1-need2);
    long long ans=common*min((long long)costBoth,(long long)cost1+cost2);

    if(need1>need2){
        ans=ans+remaining*min((long long)cost1,(long long)costBoth);
    }
    else{
          ans=ans+remaining*min((long long)cost2,(long long)costBoth);
    }
  return ans;
    }
};