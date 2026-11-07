class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {

        // Available servers: {weight, index}
        priority_queue<pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>> available;

        // Busy servers: {finishTime, weight, index}
        priority_queue<tuple<long long,int,int>,
        vector<tuple<long long,int,int>>,
        greater<tuple<long long,int,int>>> busy;

        int n = servers.size();
        int m = tasks.size();

        vector<int> ans(m);

        // Initially, all servers are available
        for(int i = 0; i < n; i++) {
            available.push({servers[i], i});
        }

        long long time = 0;

        for(int i = 0; i < m; i++) {

            time = max(time, (long long)i);

            // Move completed servers to available heap
            while(!busy.empty() &&
                  get<0>(busy.top()) <= time) {

                auto [finish, weight, index] = busy.top();
                busy.pop();

                available.push({weight, index});
            }

            // If no server is available, advance time
            if(available.empty()) {

                time = get<0>(busy.top());

                while(!busy.empty() &&
                      get<0>(busy.top()) <= time) {

                    auto [finish, weight, index] = busy.top();
                    busy.pop();

                    available.push({weight, index});
                }
            }

            // Select the best available server
            auto [weight, index] = available.top();
            available.pop();

            ans[i] = index;

            // Add server to busy heap
            busy.push({time + tasks[i], weight, index});
        }

        return ans;
    }
};