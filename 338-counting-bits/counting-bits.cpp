class Solution {
public:
    vector<int> countBits(int n) {
    int count;
    vector<int>ans;
    for(int i=0;i<=n;i++){
        count=0;
        int temp=i;
        while(temp){
            temp=temp&(temp-1);
            count++;
        }
        ans.push_back(count);
    }
    return ans;
    }
};