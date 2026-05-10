class Solution {
public:
    int maxArea(vector<int>& height) {
    int low =0 ,high=height.size()-1;
    int area,maxarea=0;
    while(low<high){
        int width= high-low;
        int area=width*min(height[low],height[high]);
        maxarea=max(maxarea,area);
        if(height[low]<height[high]){
           low++;
        }
        else{
            high--;
        }
    }  
    return maxarea;
    }
};