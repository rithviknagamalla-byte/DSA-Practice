class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
      int i=1;
      int min=0;
      int n = intervals.size();
      sort(intervals.begin(),intervals.end(),
      [](vector<int>& a,vector<int>& b){
        return a[1]<b[1];
      });
      int prevEnd=intervals[0][1];
      while(i<n){
      if(intervals[i][0]<prevEnd){
      min++;
      }
      else{
        prevEnd=intervals[i][1];
      }
      i++;
      }  
      return min;
    }
};