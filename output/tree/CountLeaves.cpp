
//using queue
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        if(root==NULL){
            return 0;
        }
        queue<Node*> q;
        q.push(root);
        int cnt=0;
        while(!q.empty()){
            Node* tmp=q.front();
            q.pop();
            
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
            
            if(tmp->left==NULL && tmp->right==NULL) cnt++;
        }
        return cnt;
    }
};

//using recursion
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int solve(Node* root){
        if(root==NULL) return 0;
        if(!root->left && !root->right) return 1;
        
        return solve(root->left) + solve(root->right);
    }
    int countLeaves(Node* root) {
        // write code here
        return solve(root);
    }
};