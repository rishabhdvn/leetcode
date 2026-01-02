class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int ans=-1;
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        for(auto& p : mp){
            if(p.second>1){
                ans=p.first;  
            }
        }
        return ans;
    }
};