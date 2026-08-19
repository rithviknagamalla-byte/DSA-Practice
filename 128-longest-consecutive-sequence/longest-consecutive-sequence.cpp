class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int>st;
        int length=0;
        int maxlength=0;

        for(int x:nums){
        st.insert(x);
        }

        int current;
        for(int x:st){
            if(st.find(x-1)==st.end()){
             current=x;
             length=1;
            while(st.find(current+1)!=st.end()){
            current++;
            length++;   
            }
            maxlength=max(maxlength,length);
        }
        }
        return maxlength;
    }
};