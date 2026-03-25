#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};
*/
bool getPath(vector<int>& ans,TreeNode<int> * root,int t){
    if(!root) return false;

    ans.push_back(root->data);

    if(root->data==t) return true;

    if(getPath(ans,root->left,t) || getPath(ans,root->right,t)) return true;

    ans.pop_back();
    return false;

}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
    vector<int> ans;
    getPath(ans,root,x);
    return ans;

}
