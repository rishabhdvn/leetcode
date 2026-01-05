class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long total = 0;
        int neg = 0;
        long long minAbs = LLONG_MAX;

        for (auto &row : matrix) {
            for (auto x : row) {
                total += llabs(x);
                if (x < 0) neg++;
                minAbs = min(minAbs, llabs(x));
            }
        }

        if (neg % 2 == 0) return total;
        return total - 2 * minAbs;
    }
};
