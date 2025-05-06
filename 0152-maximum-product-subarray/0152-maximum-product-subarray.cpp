class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int max_ending=nums[0];
        int min_ending=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(max_ending,min_ending);

            }
            max_ending=max(nums[i],max_ending*nums[i]);
            min_ending=min(nums[i],min_ending*nums[i]);
            res=max(res,max_ending);
        }
    return res;
        
    }
};