class Solution {
public:
  int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<vector<int>> jobs;
        for (int i = 0; i < profit.size(); ++i) jobs.push_back({startTime[i], endTime[i], profit[i]});
        sort(jobs.begin(), jobs.end());

        int n = profit.size();
        vector<int> dp(n + 1, 0);
        for (int idx = n - 1; idx >= 0; idx--) {
            int notTake = dp[idx + 1];
            vector<int> v = {jobs[idx][1], 0, 0};
            int nextIdx = lower_bound(jobs.begin(), jobs.end(), v) - jobs.begin();
            int take = jobs[idx][2] + dp[nextIdx];
            dp[idx] = max(take, notTake);
        }
        return dp[0];
    }
};