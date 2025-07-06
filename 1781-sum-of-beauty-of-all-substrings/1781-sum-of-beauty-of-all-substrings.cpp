class Solution {
public:
    int beautySum(string s) {
        int counter=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            unordered_map<char,int> freq;
            for(int j=i;j<n;j++){
                freq[s[j]]++;

                int max_freq=0;
                int min_freq=INT_MAX;
                for(auto& it: freq){
                    max_freq=max(max_freq,it.second);
                    min_freq=min(min_freq,it.second);
                }
                counter+=(max_freq-min_freq);
            }
        }
        return counter;
        
    }
};