class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max_len=0,left=0,right=0,zeroes=0;
        while(right<nums.size()){
            if(nums[right]==0){
                zeroes++;
            }
            while(zeroes>k){
                if(nums[left]==0) zeroes--;
                left++;
            }
            max_len=max(max_len,right-left+1);
            right++;
        }
        return max_len; 
    }
};