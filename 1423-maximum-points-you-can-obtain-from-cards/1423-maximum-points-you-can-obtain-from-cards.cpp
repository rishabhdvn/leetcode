class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        if(n<k) return -1;
        int total_sum=0;
        for(int i=0;i<k;i++){
            total_sum+=cardPoints[i];
        }

            int max_sum=total_sum;
            int leftInd=k-1;
            int rightInd=n-1;
            for(int i=0;i<k;i++){
            total_sum-=cardPoints[leftInd--];
            total_sum+=cardPoints[rightInd--];
            max_sum=max(max_sum,total_sum);
            }
        return max_sum;
    }
};