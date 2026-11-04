class Solution {
public:
    long long minOperations(vector<int>& nums, int x, int k) {
        int n = nums.size();

        // Two multisets to maintain the median
        multiset<int> low, high;

        long long sumLow = 0, sumHigh = 0;
        int windowSize = 0;

        // Balance the two halves
        auto balance = [&]() {

            int need = (windowSize + 1) / 2;

            while (low.size() > need) {
                auto it = prev(low.end());
                int val = *it;

                low.erase(it);
                sumLow -= val;

                high.insert(val);
                sumHigh += val;
            }

            while (low.size() < need) {
                auto it = high.begin();
                int val = *it;

                high.erase(it);
                sumHigh -= val;

                low.insert(val);
                sumLow += val;
            }
        };

        // Insert an element
        auto add = [&](int val) {

            if (low.empty() || val <= *prev(low.end())) {
                low.insert(val);
                sumLow += val;
            }
            else {
                high.insert(val);
                sumHigh += val;
            }

            windowSize++;
            balance();
        };

        // Remove an element
        auto remove = [&](int val) {

            auto it = low.find(val);

            if (it != low.end()) {
                low.erase(it);
                sumLow -= val;
            }
            else {
                it = high.find(val);
                high.erase(it);
                sumHigh -= val;
            }

            windowSize--;
            balance();
        };

        // Calculate the cost of making the window equal
        auto getCost = [&]() -> long long {

            long long median = *prev(low.end());

            return median * low.size() - sumLow
                 + sumHigh - median * high.size();
        };

        // Step 1: Calculate the cost of every window
        vector<long long> cost(n - x + 1);

        for (int i = 0; i < n; i++) {

            add(nums[i]);

            if (i >= x) {
                remove(nums[i - x]);
            }

            if (i >= x - 1) {
                cost[i - x + 1] = getCost();
            }
        }

        // Step 2: Dynamic Programming
        const long long INF = LLONG_MAX / 4;

        vector<long long> prevDP(n + 1, 0);
        vector<long long> currDP(n + 1, INF);

        for (int cnt = 1; cnt <= k; cnt++) {

            fill(currDP.begin(), currDP.end(), INF);

            for (int i = 1; i <= n; i++) {

                // Skip current position
                currDP[i] = currDP[i - 1];

                // Select a window of size x
                if (i >= x) {
                    currDP[i] = min(
                        currDP[i],
                        prevDP[i - x] + cost[i - x]
                    );
                }
            }

            prevDP.swap(currDP);
        }

        return prevDP[n];
    }

 
};