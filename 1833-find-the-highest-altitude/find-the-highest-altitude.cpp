class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
     int start=0;
     int maxi=0;
     int sum=start;
     for(int i=0;i<gain.size();i++){
    sum=sum+gain[i];
    maxi=max(maxi,sum);
     }
return maxi;
    }
};