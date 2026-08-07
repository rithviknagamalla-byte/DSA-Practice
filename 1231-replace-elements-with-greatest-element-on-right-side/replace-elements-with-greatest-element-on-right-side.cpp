class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

   int n=arr.size()-1;
   int currelement=-1;
   int curr;
   int max_array=-1;
   for(int i=n;i>=0;i--){
   curr=arr[i];
   arr[i]=currelement;
   currelement=max(curr,currelement);
   }
   return arr;
    }
};