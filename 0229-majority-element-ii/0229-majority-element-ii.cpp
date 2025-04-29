class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        map<int,int> frequencyMap;
        for(int num:nums){
            frequencyMap[num]++;
        }
        for(const auto &pair:frequencyMap){
            if(pair.second>(nums.size()/3)){
              int  majorityElement=pair.first;
                res.push_back(majorityElement);
            }
        }
        return res;
        
    }
};