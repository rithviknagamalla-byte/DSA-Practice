class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int> diff(nums1.size());
        int maxDiff = 0;
        long long sum = 0;

        for (int i = 0; i < nums1.size(); i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            maxDiff = max(maxDiff, diff[i]);
            sum += diff[i];
        }

        long long k = (long long)k1 + k2;

        if (sum <= k) return 0;

        vector<long long> freq(maxDiff + 1, 0);
        for (int d : diff) {
            freq[d]++;
        }

        for (int d = maxDiff; d > 0 && k > 0; d--) {
            long long count = min(freq[d], k);
            freq[d] -= count;
            freq[d - 1] += count;
            k -= count;
        }

        long long ans = 0;
        for (int d = 1; d <= maxDiff; d++) {
            ans += freq[d] * d * d;
        }

        return ans;
    }
};