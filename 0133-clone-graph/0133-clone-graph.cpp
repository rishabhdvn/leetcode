/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node) return nullptr;
        vector<Node*> newNodes(101,nullptr);
        vector<bool> visited(101,false);
        queue<Node*> q;
        q.push(node);
        newNodes[node->val]=new Node(node->val);
        visited[node->val]=true;
        while(!q.empty()){
            Node*current=q.front();
            q.pop();
            for(Node* neighbor:current->neighbors){
                if(!newNodes[neighbor->val]){
                    newNodes[neighbor->val]=new Node(neighbor->val);
                    if(!visited[neighbor->val])
                        q.push(neighbor);
                        visited[neighbor->val]=true;
                    }
        newNodes[current->val]->neighbors.push_back(newNodes[neighbor->val]);
                }
            }
        return newNodes[1];
        
    }
};