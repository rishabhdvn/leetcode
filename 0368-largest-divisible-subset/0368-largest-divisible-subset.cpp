class Solution {
public:
    int solve(vector<int>& nums, int index, int previous, vector<vector<int>>& dp) {
        if (index == nums.size()) return 0;
        if (dp[index][previous + 1] != -1) return dp[index][previous + 1];

        int notTake = solve(nums, index + 1, previous, dp);

        int take = 0;
        if (previous == -1 || nums[index] % nums[previous] == 0) {
            take = 1 + solve(nums, index + 1, index, dp);
        }

        return dp[index][previous + 1] = max(take, notTake);
    }

    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return {};

        sort(nums.begin(), nums.end());
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        solve(nums, 0, -1, dp);

        vector<int> subset;
        int prev = -1;
        int index = 0;

        while (index < n) {
            int take = 0;
            if (prev == -1 || nums[index] % nums[prev] == 0)
                take = 1 + (index + 1 < n ? dp[index + 1][index + 1] : 0);

            int notTake = (index + 1 < n ? dp[index + 1][prev + 1] : 0);

            if (take >= notTake && (prev == -1 || nums[index] % nums[prev] == 0)) {
                subset.push_back(nums[index]);
                prev = index;
            }

            index++;
        }

        return subset;
    }
};
