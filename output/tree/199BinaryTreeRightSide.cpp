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
    vector<vector<int>> levelordertraversal(TreeNode* root){
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int lvlsize=q.size();
            vector<int> lvl;
            for(int i=0;i<lvlsize;i++){
                TreeNode* tmp=q.front();
                q.pop();
                lvl.push_back(tmp->val);
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }
            ans.push_back(lvl);
        }
        return ans;
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> ans=levelordertraversal(root);
        vector<int> right;
        for(auto& lvl:ans){
            right.push_back(lvl.back());
        }
        return right;
    }
};
