/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int height(TreeNode* root){
        if(root==NULL) return 0;

        int l=height(root->left);
        int r=height(root->right);

        return 1 + max(l,r);
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;

        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);

        bool diff=abs(height(root->left)-height(root->right))<=1;
        if( l && r && diff) return true;
        else{
            return false;
        }
    }
};

//optimal

/*

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 */

class Solution {
  private:
    int dfs(Node* root){
        if(root==NULL){
            return 0;
        }
        int leftHeight=dfs(root->left);
        
        if(leftHeight==-1) return -1;
        
        int rightHeight=dfs(root->right);
        
        if(rightHeight==-1) return -1;
        
        if(abs(leftHeight-rightHeight)>1) return -1;
        
        return max(leftHeight,rightHeight)+1;
    }
  public:
    bool isBalanced(Node* root) {
        // Code here
        int val=dfs(root);
        if(val==-1) return false;
        else{ 
            return true;
        }
    }
};