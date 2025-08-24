class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int total=1<<n;
        vector<int> subset;
        set<vector<int>> set;
        vector<vector<int>> res;
        for(int i=0;i<total;i++){
            subset.clear();
            for(int j=0;j<n;j++){
                if(i & (1<<j)){
                    subset.push_back(nums[j]);
                }
            }
            set.insert(subset);
        }
        for(auto it : set){
            res.push_back(it);
        }
        return res;     
    }
};