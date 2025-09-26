class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int n = nums.size();
        if(n == 0) return ans;

        // Find first occurrence
        int start = 0, end = n - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
                ans[0] = mid;       // store potential first
                end = mid - 1;      // move left to find earlier
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        // Find last occurrence
        start = 0, end = n - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
                ans[1] = mid;       // store potential last
                start = mid + 1;    // move right to find later
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        return ans;
    }
};
