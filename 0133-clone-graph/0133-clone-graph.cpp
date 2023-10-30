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
    private:

    void dfs(Node* node,Node* copy,vector<Node*>&vis){
        vis[node->val]=copy;

        for(auto x:node->neighbors){
            if(vis[x->val]){
                (copy->neighbors).push_back(vis[x->val]);
            }else{
                Node* neigh= new Node(x->val);
                (copy->neighbors).push_back(neigh);
                dfs(x,neigh,vis);
            }
        }
    }
public:
    Node* cloneGraph(Node* node) {

        if(!node)return NULL;

        vector<Node*> vis(200,NULL);
        Node* copy= new Node(node->val);

        vis[node->val]=copy;
        dfs(node,copy,vis);
        return copy;
        
    }
};