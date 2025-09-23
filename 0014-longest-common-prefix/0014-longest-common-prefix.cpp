struct Node {
    Node* links[26];
    bool flag = false;

    bool containsKey(char ch) {
        return links[ch - 'a'] != NULL;
    }
    void put(char ch, Node* node) {
        links[ch - 'a'] = node;
    }
    Node* get(char ch) {
        return links[ch - 'a'];
    }
    void setEnd() {
        flag = true;
    }
};

class Solution {
private:
    Node* root;

public:
    Solution() {
        root = new Node();
    }

    void insert(string word) {
        Node* node = root;
        for (char ch : word) {
            if (!node->containsKey(ch)) {
                node->put(ch, new Node());
            }
            node = node->get(ch);
        }
        node->setEnd();
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Step 1: Insert the first word
        insert(strs[0]);

        // Step 2: Compare Trie with each word
        string prefix = "";
        Node* node = root;

        for (char ch : strs[0]) {
            if (!node->containsKey(ch)) break;
            prefix.push_back(ch);
            node = node->get(ch);

            // Check if current char exists in all other words at same position
            for (int i = 1; i < strs.size(); i++) {
                if (ch != strs[i][prefix.size() - 1]) {
                    return prefix.substr(0, prefix.size() - 1);
                }
            }
        }
        return prefix;
    }
};
