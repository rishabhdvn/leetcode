class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (n == 0) return 0;
        int max_len = 0;
        for (int i = 0; i < n; i++) {
            unordered_set<char> s1;  
            for (int j = i; j < n; j++) {
                if (s1.find(s[j]) != s1.end()) {
                    max_len = max(max_len, j - i);
                    break;
                }
                s1.insert(s[j]);
            }
            
            max_len = max(max_len, (int)s1.size());
        }
        return max_len;
    }
};
