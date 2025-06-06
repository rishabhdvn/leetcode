class Trie {
public:
struct Node
{
    Node* links[26];
    bool flag=false;

    bool containsKey(char ch){
        return links[ch-'a']!=NULL;
    }
    void put(char ch,Node nodd)
}
    Trie() {
       
        
    }
    
    void insert(string word) {
        
    }
    
    bool search(string word) {
        
    }
    
    bool startsWith(string prefix) {
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */