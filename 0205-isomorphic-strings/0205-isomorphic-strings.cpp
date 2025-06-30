class Solution {
public:
    bool isIsomorphic(string s, string t) {
        set<pair<char,char>> mapping;
        set<char> setS;
        set<char> setT;
        for(int i=0;i<s.size();i++){
            mapping.insert({s[i],t[i]});
            setS.insert(s[i]);
            setT.insert(t[i]);
        }
        return (mapping.size()==setS.size() && mapping.size()==setT.size());  
    }
};