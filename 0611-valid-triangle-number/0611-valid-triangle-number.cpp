class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ptr1=0;
        int count=0;
        while(ptr1 < n-2){
            int ptr2=ptr1+1;
            while(ptr2 < n-1){
                int ptr3=ptr2+1;
                while(ptr3<n){
                if(nums[ptr1]+nums[ptr2]>nums[ptr3]) count++;
                    ptr3++;
                }
                ptr2++;
            }
            ptr1++;
        }
        return count;
    }
};