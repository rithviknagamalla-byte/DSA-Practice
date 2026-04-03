class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        int index=0;
        vector<int>temp(m+n);
        while(i<m && j<n){
           if(nums1[i]<=nums2[j]){
              temp[index]=nums1[i];
               i++;
               index++;
           }
           else{
            temp[index]=nums2[j];
            j++;
            index++;
           }
           
        }
        while(i<m){
        temp[index]=nums1[i];
        i++;
        index++;
        }
        while(j<n){
        temp[index]=nums2[j];
        j++;
        index++;
        }
       for(int k=0;k<n+m;k++){
        nums1[k]=temp[k];
       } 
    }
};