/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        map<int,int> nodes;
        queue<pair<Node*,int>> todo;
        
        todo.push({root,0});
        while(!todo.empty()){
            auto p=todo.front();
            todo.pop();
            
            Node* tmp=p.first;
            int x=p.second;
            
            nodes[x]=tmp->data;
            if(tmp->left){
                todo.push({tmp->left,x-1});
            }
            if(tmp->right){
                todo.push({tmp->right,x+1});
            }
            
        }
        vector<int> ans;
        for(auto p:nodes){
            ans.push_back(p.second);
        }
        return ans;
    }
};
