class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        if(nums[start]<=nums[end]){
            return nums[start];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid<end && nums[mid]>nums[mid+1]){
                return nums[mid+1];
            }
            else if(mid> start && nums[mid]<nums[mid-1]){
                return nums[mid];
            }
            else if(nums[start]>=nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
        
    }
};