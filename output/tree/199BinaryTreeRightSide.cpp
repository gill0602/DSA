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

#Optimal Approach

#include <bits/stdc++.h>
using namespace std;

// TreeNode definition
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) : val(v), left(NULL), right(NULL) {}
};

class Solution {
public:
    // Recursive function to get left view
    void leftDFS(TreeNode* node, int level, vector<int>& res) {
        // Base case: null node
        if (!node) return;

        // If this is the first node at the current level
        if (res.size() == level)
            res.push_back(node->val);

        // Explore left subtree first
        leftDFS(node->left, level + 1, res);

        // Then explore right subtree
        leftDFS(node->right, level + 1, res);
    }

    // Recursive function to get right view
    void rightDFS(TreeNode* node, int level, vector<int>& res) {
        if (!node) return;

        if (res.size() == level)
            res.push_back(node->val);

        // Explore right subtree first
        rightDFS(node->right, level + 1, res);

        // Then explore left subtree
        rightDFS(node->left, level + 1, res);
    }

    vector<int> leftView(TreeNode* root) {
        vector<int> res;
        leftDFS(root, 0, res);
        return res;
    }

    vector<int> rightView(TreeNode* root) {
        vector<int> res;
        rightDFS(root, 0, res);
        return res;
    }
};

