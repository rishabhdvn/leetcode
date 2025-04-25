class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> frequencyMap;
        for(int num:nums){
            frequencyMap[num]++;
        }
        int maxFreq=0;
        int mostFreqval=-1;
        for(const auto &pair :frequencyMap){
            if(pair.second>maxFreq){
                maxFreq=pair.second;
                mostFreqval=pair.first;
            }

        }
        return mostFreqval;
    }
};