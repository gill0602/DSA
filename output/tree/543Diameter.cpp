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

//optimal solution
class Solution {
public:
    int res=0;
    public:
    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);
        return res;
    }
    int solve(TreeNode* root){
        if(root==NULL) return 0;

        int l=solve(root->left);
        int r=solve(root->right);

        res=max(res,l+r);
        return 1+max(l,r);
    }

};