class Solution {
public:
    int maxArea(vector<int>& height) {
       int low=0,high=height.size()-1;
       int width=0;
       int area;
       int maxarea=INT_MIN;
       while(low<high){
       area=(high-low)*(min(height[low],height[high]));
       if(height[low]<height[high]){
        low++;
       }
       else{
        high--;
       }
       maxarea=max(maxarea,area);
       } 
       return maxarea;
    }
};