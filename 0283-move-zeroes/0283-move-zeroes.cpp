class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int ptr1 = 0, ptr2 = 1;

        while (ptr2 < n) {
            if (nums[ptr1] == 0 && nums[ptr2] != 0) {
                swap(nums[ptr1], nums[ptr2]);
                ptr1++;
                ptr2++;
            } else if (nums[ptr1] == 0 && nums[ptr2] == 0) {
                ptr2++;
            } else {
                ptr1++;
                ptr2++;
            }
        }
    }
};
