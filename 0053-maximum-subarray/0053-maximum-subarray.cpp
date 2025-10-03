class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_ending=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            max_ending=max(nums[i],max_ending+nums[i]);
            res=max(max_ending,res);
        }
        return res; 
    }
};