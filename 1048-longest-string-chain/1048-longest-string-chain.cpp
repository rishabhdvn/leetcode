class Solution {
public:
    static bool isPred(const string &s, const string &t) {
        if (t.size() != s.size() + 1) return false;
        int i = 0, j = 0; bool skipped = false;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) i++, j++;
            else {
                if (skipped) return false;
                skipped = true; j++;
            }
        }
        return true;
    }

    int solve(vector<string>& words, int index, int prev, vector<vector<int>>& dp) {
        if (index == words.size()) return 0;
        if (dp[index][prev+1] != -1) return dp[index][prev+1];

        int notTake = solve(words, index+1, prev, dp);

        int take = 0;
        if (prev == -1 || isPred(words[prev], words[index])) {
            take = 1 + solve(words, index+1, index, dp);
        }

        return dp[index][prev+1] = max(take, notTake);
    }

    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(),
             [](const string &a, const string &b) {
                 return a.size() < b.size();
             });

        int n = words.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return solve(words, 0, -1, dp);
    }
};
