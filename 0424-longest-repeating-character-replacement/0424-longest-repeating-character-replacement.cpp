class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int right=0,left=0,max_len=0,max_count=0;
        vector<int> count(26,0);
        while(right<n){
            count[s[right]-'A']++;
            max_count=max(max_count,count[s[right]-'A']);

            while((right-left+1)-max_count>k){
            count[s[left]-'A']--;
            left++;
            }
            max_len=max(max_len,right-left+1);
            right++;
        }
        return max_len;
    }
};