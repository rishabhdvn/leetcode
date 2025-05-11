class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int answer = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalHours = 0;

            for (int pile : piles) {
                totalHours += (pile + mid - 1) / mid; // ceil(pile / mid)
            }

            if (totalHours <= h) {
                answer = mid;
                high = mid - 1; // try smaller k
            } else {
                low = mid + 1;  // try larger k
            }
        }

        return answer;
    }
};

