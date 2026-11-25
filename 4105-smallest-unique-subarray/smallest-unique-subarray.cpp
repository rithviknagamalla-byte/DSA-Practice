class Solution {
public:
    using ll = long long;

    const ll MOD1 = 1000000007;
    const ll MOD2 = 1000000009;
    const ll BASE1 = 100019;
    const ll BASE2 = 100043;

    bool check(vector<int>& nums, int len) {
        int n = nums.size();

        unordered_map<ll, int> mp;

        ll h1 = 0, h2 = 0;
        ll p1 = 1, p2 = 1;

        for (int i = 0; i < len; i++) {
            h1 = (h1 * BASE1 + nums[i]) % MOD1;
            h2 = (h2 * BASE2 + nums[i]) % MOD2;

            p1 = (p1 * BASE1) % MOD1;
            p2 = (p2 * BASE2) % MOD2;
        }

        mp[(h1 << 32) | h2]++;

        for (int i = len; i < n; i++) {
            h1 = (h1 * BASE1 + nums[i]
                  - p1 * nums[i - len] % MOD1 + MOD1) % MOD1;

            h2 = (h2 * BASE2 + nums[i]
                  - p2 * nums[i - len] % MOD2 + MOD2) % MOD2;

            mp[(h1 << 32) | h2]++;
        }

        for (auto& it : mp) {
            if (it.second == 1)
                return true;
        }

        return false;
    }

    int smallestUniqueSubarray(vector<int>& nums) {
        int low = 1;
        int high = nums.size();
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(nums, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};