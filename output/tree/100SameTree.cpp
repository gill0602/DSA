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
    int solve(TreeNode*p, TreeNode*q){
        if(p==NULL && q==NULL) return 1;

        if(p==NULL && q!=NULL || p!=NULL && q==NULL) return -1;

        if(p->val!=q->val) return -1;
        int l1=solve(p->left,q->left);
        int l2=solve(p->right,q->right);

        if(l1==l2 && l1!=-1) return 1;
        else{
            return -1;
        }
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return solve(p,q)==1;
    }
};