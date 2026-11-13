class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        deque<pair<int,int>> dq;

        long long cost = 0, ans = 0;
        int j = n - 1;

        for (int i = n - 1; i >= 0; i--) {
            int count = 1;

            while (!dq.empty() && dq.back().first < nums[i]) {
                int val = dq.back().first;
                int cnt = dq.back().second;
                dq.pop_back();

                count += cnt;
                cost += 1LL * (nums[i] - val) * cnt;
            }

            dq.push_back({nums[i], count});

            while (cost > k) {
                int val = dq.front().first;
                int cnt = dq.front().second;
                dq.pop_front();

                cost -= val - nums[j];
                j--;

                if (cnt > 1)
                    dq.push_front({val, cnt - 1});
            }

            ans += j - i + 1;
        }

        return ans;
    }
};