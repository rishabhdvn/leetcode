class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_ending=nums[0];
        int max_sum=nums[0];
        int i=1;
        while(i<n){
            max_sum=max(nums[i],nums[i]+max_sum);
            max_ending=max(max_ending,max_sum);
            i++;
            }
            return max_ending;
    }
};