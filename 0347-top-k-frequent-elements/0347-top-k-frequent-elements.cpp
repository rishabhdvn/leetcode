class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto& i : nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> MinHeap;
    for(auto& i: mp){
        MinHeap.push({i.second,i.first});
        while(MinHeap.size()>k){
            MinHeap.pop();
        }
    }
        vector<int> ans;
        while(!MinHeap.empty()){
            ans.push_back(MinHeap.top().second);
            MinHeap.pop();
        }
    return ans;   
    }
};