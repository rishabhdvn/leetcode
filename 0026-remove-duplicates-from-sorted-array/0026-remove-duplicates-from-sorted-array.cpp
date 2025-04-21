class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> res;
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            if(set.find(nums[i])==set.end()){
                set.insert(nums[i]);
                res.push_back(nums[i]);
            }
        }
         nums=res;
        return nums.size();
    }
};