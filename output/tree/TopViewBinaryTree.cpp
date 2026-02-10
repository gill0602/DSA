/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
vector<int> getTopView(TreeNode<int> *root)
{
    // Write your code here.
    map<int,int> nodes;
    queue<pair<TreeNode<int>*,int>> todo;

    todo.push({root,0});

    while(!todo.empty()){
        auto p=todo.front();
        todo.pop();

        TreeNode<int>* tmp=p.first;
        int x=p.second;

        if(nodes.find(x)==nodes.end()){
            nodes[x]=tmp->data;
        }
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
