class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        for(auto& p : mp){
            if(p.second==1){
                ans=p.first;
            }
        }
        return ans;
    }
};