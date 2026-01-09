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
    int solve(TreeNode* root,int& sm){
        if(!root) return 0 ;
        
        int right=max(0,solve(root->right,sm));
        int left=max(0,solve(root->left,sm));

        sm=max(sm,left+right+root->val);

        return max(left,right)+root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        int sm=INT_MIN;
        solve(root,sm);
        return sm;
    }
};
