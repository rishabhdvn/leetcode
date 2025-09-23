
struct Node
{
    Node* links[26]; //Implementation of character words
    bool flag=false;//setting these as false initially

    bool containsKey(char ch){
        return links[ch-'a']!=NULL; //to check whether it contains the key or not
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;  //put node to node present before
    }
    Node* get(char ch){
        return links[ch-'a']; // get the node with specific key
    }
    void setEnd(){
        flag=true; // set the current node as the end of the word
    }
    bool isEnd(){
        return flag; // check whether its the end ofthe word or not
    }
};

class Trie {
       private:
       Node* root;
public:
    Trie() {
        root=new Node();       
    }
    
    void insert(string word) {
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(!node->containsKey(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
        }
        node->setEnd();    
    }
    
    bool search(string word) {
        Node* node=root;
        for(int i=0;i<word.length();i++){
        if(!node->containsKey(word[i])){
            return false;
        }
        node=node->get(word[i]);
        }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        Node* node=root;
        for(int i=0;i<prefix.length();i++){
            if(!node->containsKey(prefix[i])){
                return false;
            }
            node=node->get(prefix[i]);
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */