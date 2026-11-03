class Solution {
public:
    int minMoves2(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int x;
        if (n % 2 != 0) {
            x = nums[n / 2];
        } else {
            x = (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
        }
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
           count=count+abs(x-nums[i]);
        }
        return count;
    }

};